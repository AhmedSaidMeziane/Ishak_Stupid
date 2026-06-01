#pragma once
#include<iostream>
#include "DATA_GAME.h"
#include"input_output.h"
using namespace std;

void What_DO(){
    cout<<"WHAT WILL YOU DO? \n";
    cout<<"----------------------------------\n";
    cout<<"1 - Explore Area \n";
    cout<<"2 - Gather Resources \n";
    cout<<"3 - Hunt \n";
    cout<<"4 - Eat / Drink \n";
    cout<<"5 - Move Location \n";
    cout<<"6 - sleep \n";
    cout<<"7 - Inventory (Full View) \n";
    cout<<"8 - craft \n";
    cout<<"9 - Mission Status \n";
    cout<<"0 - Exit Game \n";
    cout<<"----------------------------------\n";
}

// تم إضافة & لتقرأ من اللاعب الحقيقي
void player_status(ST_player &player){
    cout<<"----------------------------------\n";
    cout<<"PLAYER STATUS \n";
    cout<<"----------------------------------\n";
    cout<<"Health: "<<player.health<<endl;
    cout<<"Hunger: "<<player.hunger<<endl;
    cout<<"Water: "<<player.water<<endl;
    cout<<"Energy: "<<player.energy<<endl;
    cout<<"----------------------------------\n";
}

// تم إضافة & وطباعة realy_location لعرض المكان الحالي الفعلي
void information_game(ST_player &player, ST_Locations &location){
    cout<<"----------------------------------\n";
    cout<<"Day: "<<player.day<<endl;
    cout<<"Place: "<<location.realy_location<<endl; // تصحيح طباعة المكان الحالي
    cout<<"Time: "<<player.realtime<<endl;
}

// تم إضافة & للمخزن
void quick_inventory(inventory &vetory){
    cout<<"INVENTORY (Quick View) \n";
    cout<<"----------------------------------\n";
    cout<<"Wood: "<<vetory.core_items.wood<<endl;
    cout<<"Stone: "<<vetory.core_items.stone<<endl;
    cout<<"Water: "<<vetory.core_items.water<<endl;
    cout<<"Food: "<<vetory.core_items.food<<endl;
}

// تعديل الدالة لتستقبل المتغيرات الحقيقية من اللعبة بدلاً من صنع متغيرات وهمية
void all_Data(ST_player &player, inventory &vetory, ST_Locations &location){
    cout<<"===========================\n";
    cout<<"        LOST SIGNAL       \n";
    cout<<"===========================\n";
    information_game(player, location);
    player_status(player);
    quick_inventory(vetory);
    What_DO();
}

// تعديل الدالة لتمرير البيانات إلى all_Data
int value(ST_player &player, inventory &vetory, ST_Locations &location){
    all_Data(player, vetory, location);
    int x = proccess::input_number();
    return x;
}
#pragma once
#include<iostream>
#include"UI.h"
#include"input_output.h"
#include"Hunt.h"
#include"move_location.h"
#include"Eat_Drink.h"
#include"explore.h"
#include"inventory_fullview.h"
#include"craft.h"
using namespace std;

char if_win(inventory &vetory){
    if(vetory.radio == 5){
        return 'a';
    }
    return 'b';
}
char lose(ST_player player){
    if(player.energy == 0 || player.health == 0){
        return 'a';
    }
    return 'b';
}

void time(ST_player &player) {
    
    int period = player.n_control % 3;
    player.realtime = player.time[period]; 
    
    if (player.n_control >= 3) {
        player.day++;
        player.n_control = period; 
    }
}

void sleep(ST_player &player) {
    // تصحيح منطق النوم واستعادة الطاقة
    if (player.energy >= 10) {
        player.day++; // حتى لو طاقته ممتلئة، النوم يمرر يوماً جديداً
        player.n_control = 0; // يبدأ اليوم الجديد من الصباح
        player.realtime = player.time[0];
        cout << "I cant Give you More Energy You Are Full, but a new day started! \n";
    }
    else {
        player.energy = 10;  
        player.day++;         
        player.n_control = 0;
        player.realtime = player.time[0];
        cout << "Done You Are A new Men \n";
    }
}

void loop_game(ST_player &player,inventory &vetory,ST_Locations &loc){
    int x = -1; 
    int w;
    
    do{
        cout<<"Enter 1 tO Move to Next \n";
        w = proccess::input_number();

        if(w == 1){
            x = value(player,vetory,loc);

        }else{
            cout<<"I dont Care Enter Any Value You Want \n";
            x = -1; 
        }
        
        switch (x) {
        case 1:
        case 2:
            run_explore(loc, player, vetory);
            break;

        case 3:
            Hunt_run(player, vetory, loc);
            break;

        case 4:
            drink_eat(player, vetory);
            break;
        case 5:
            move_location(loc,player,vetory);
            break;
        case 6:
            sleep(player);
            break;
        case 7:
            full_view(vetory);
            break;
        case 8:
            run_craft(vetory,player);
            break; 
        default:
        cout<<"Invalid,Value \n";
            break;
        }

        
        time(player); 
        if(if_win(vetory) == 'a'){
            cout<<"You Win And send your Messge and leave the islane but i will miss you a lot \n";
            break;
        }
        if(lose(player) == 'a'){
            cout<<"Loser, Hahahahahahahahahahaha \n";
            break;
        }
    }while(x != 0);
}
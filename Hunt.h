#pragma once
#include<iostream>
#include"input_output.h"
#include"DATA_GAME.h"
using namespace std;

void beach_hunt(ST_player &player,inventory &vetory){
    if(vetory.tool.spear >= 1){
        int x = proccess::Randomi(1,2);
        if(x == 1){
            vetory.core_items.food ++;
            player.energy ++;
        }else{
            cout<<"Good Look You didnt Hunt Any fish Today \n";
            player.energy--;
            player.hunger--;
            player.n_control++;
        }
    }else{
        cout<<"Are You Kidding me: ?????? \n";
        cout<<"You want Hunt A fish Without spear Woow \n";
        cout<<"Go and Get spear And come back if you dont have spear dont come back you annoying me \n";
    }
}

void forest_hunt(ST_player &player,inventory &vetory){
    int x = proccess::Randomi(1,2);
    if(x == 2){
        cout<<"When you want to hunt, hmmmmm \n";
        cout<<"A diffrent thing happend :( \n";
        cout<<"The Wolves Hunt you but, \n";
        if(vetory.tool.knife >= 1){
            cout<<"You have a knife and you save !!! give thanks to your god this is insane \n";

        }else{
            player.health--;
            player.n_control++;
            cout<<"If you already have a knife You be save \n";
        }
    }else{
        vetory.core_items.food ++;
        cout<<"Great You are hunt an animal \n";
    }
}

void river_plane_cave_hunt(ST_player &player,inventory &vetory){
    cout<<"Are you kidding me? \n";
    cout<<"You want hunt in the river/cave/plane woow i mean realy woow even fish dont exicte dont choice this option again ! \n";
    cout<<"And if you choice this option in plane site or cave woow youre realy stupide \n";
    cout<<"If you do it i will do this conditions: \n";
    cout<<"int main(void){ end_game() return 0;} \n";
}

void Hunt_run(ST_player &player,inventory &vetory,ST_Locations &loc){
    if(loc.realy_location == loc.location[0]){
        beach_hunt(player,vetory);
    }else if(loc.realy_location == loc.location[1]){
        river_plane_cave_hunt(player,vetory);
    }else if(loc.realy_location == loc.location[2]){
        forest_hunt(player,vetory);
    }else if(loc.realy_location == loc.location[3]){
       river_plane_cave_hunt(player,vetory);
    }else if(loc.realy_location == loc.location[4]){
        river_plane_cave_hunt(player,vetory);
}
}
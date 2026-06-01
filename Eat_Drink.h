#pragma once
#include<iostream>
#include"input_output.h"
#include"DATA_GAME.h"

void drink_eat(ST_player &player,inventory &vetory){
    if(vetory.core_items.food >= 1){
        if(player.water <= 10){
        player.hunger ++;
        vetory.core_items.food--;
        cout<<"Great You are now get full your hungry \n";
        }else{
            cout<<"You Are Full \n";
        }

    }
    if(vetory.core_items.water >= 1){
        if(player.water <= 10){
        player.water ++;
        vetory.core_items.water --;
        cout<<"Thirst is up \n";
        }else{
            cout<<"You ARE FULLLL \n";
        }

    }

    if(vetory.core_items.water == 0 && vetory.core_items.food == 0){
        cout<<"So You know you have 0 water and 0 food so you want to annoying me \n";
        cout<<"So Again, You annoying me and me i will decrease your water and hungr and Health bcz you are stupod and annoying \n";
        player.health--;
        player.water--;
        player.hunger--;
    }
 }
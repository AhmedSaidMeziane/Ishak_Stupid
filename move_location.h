#pragma once
#include<iostream>
#include"input_output.h"
#include"DATA_GAME.h"

void move_location(ST_Locations &loc,ST_player &player,inventory &vetory){
    cout<<"Enter Place Want to Go into 0:beach 1:cave 2:forest 3:plane 4:river: \n";
    int x = proccess::input_number();
    if(x<=4 && x>=0){
        if(x==0){
            loc.realy_location = loc.location[0];
            cout<<"You Arrival in beach but you are tired \n";
            player.energy --;
            
        }
        else if(x==1){
            loc.realy_location = loc.location[1];
            cout<<"You arrival in Cave but Whan you clim into the cave you fallen \n";
            player.health--;
        }
        else if(x==2){
            loc.realy_location = loc.location[2];
            cout<<"You arival in forest but in the road a bunch of thiefs bescket you and stole some Thing \n";
            if(vetory.electron.battery >= 1){
                vetory.electron.battery --;
                cout<<"battery \n";
            }else if(vetory.tool.axe >= 1){
                vetory.tool.axe --;
                cout<<"Axe \n";
            }else if(vetory.core_items.food >= 1){
                vetory.core_items.food--;
                cout<<"Food \n";
            }else if(vetory.core_items.water >= 1){
                vetory.core_items.water--;
                cout<<"water \n";
            }
        }
        else if(x==3){
            loc.realy_location = loc.location[3];
            cout<<"You are s tired and hungry \n";
            player.hunger --;
            
        }
        else if(x==4){
            loc.realy_location = loc.location[4];
            cout<<"You are s tired and hungry \n";
            player.hunger --;            
        }
    }else{
        cout<<"Why you want Enter Number Great Than 4 :( \n";
        cout<<"You Want to Make The game drop \n";
        cout<<"I will Teach you Something Now \n";
        player.health -= 2;
        cout<<player.health<<" - "<<"2 \n";
        cout<<"You Desirve it";
    }
}
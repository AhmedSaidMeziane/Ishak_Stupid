#pragma once
#include <iostream>
#include "DATA_GAME.h"
#include "input_output.h"
#include "UI.h"
#include "Actionbyplace.h"

using namespace std;

// تم إضافة & لكل من player و vetory لكي تتأثر البيانات الحقيقية للاعب والمخزن
void beachit_action(ST_Locations &location, ST_player &player, inventory &vetory){
    EN_beach val = beach();
    if(val == EN_beach::nothing){
        player.energy--;
        player.n_control++;
        cout << "Wast your time \n";
    }else if(val == EN_beach::wood){
         player.energy--;
         player.n_control++;
         vetory.core_items.wood++;
         cout << "you find a wood \n";
    }else if(val == EN_beach::fishe){
        player.energy--;
        player.n_control++;
        vetory.core_items.food++;
        player.hunger--;
        player.water--;
        cout << "you find a fish \n";
    }else if(val == EN_beach::Less_beach){
        player.energy--;
        player.health--;
        player.n_control++;
        cout << "oooops \n";            
    }else if(val == EN_beach::water_less){
        player.energy--;
        player.n_control++;
        vetory.core_items.water++;
        cout << "watttttttttttttttttter \n";
    }
}

void cave_action(ST_Locations &location, ST_player &player, inventory &vetory){
    EN_cave val = cave();
    if(val == EN_cave::bear_cave){
        player.energy--;
        player.n_control++;
        player.health -= 2;
        cout << "Its Bear Brother You will get miness 2 not anything else he fuck you\n";
    }
    else if(val == EN_cave::dark_cave){
        if(vetory.tool.torch >= 1){
            player.energy--;
            player.n_control++;
            vetory.electron.radio_chip++;
            cout << "Woow, YOU find very Rare stuff , Amazing \n";          
        }else{
            player.energy--;
            player.n_control++;
            player.hunger--;
            player.water--;
            cout << "You re Wast Your Time Here brother \n";            
        }
    }
    else if(val == EN_cave::rare_tools){
        player.energy--;
        player.n_control++;
        cout << "WooW this Place is amazing you are find a axe of some one\n";
        vetory.tool.axe++;
        vetory.electron.wires++;
        vetory.electron.radio_chip++;
    }else if(val == EN_cave::nothing_c){
        player.energy--;
        player.n_control++;
        cout << "You Wast Your Time \n";        
    }else if(val == EN_cave::Minerals){
        player.energy--;
        player.n_control++;
        if (vetory.tool.axe >= 1) {
            vetory.core_items.stone += 2;
            cout << "You found a  2 stone Woow \n";
        }
        else {
            vetory.core_items.stone++;
            cout << "You founf a stone Woow \n";
        }
    }else if(val == EN_cave::battery){
        player.energy--;
        player.n_control++;
        vetory.electron.battery++;
        vetory.electron.electronique_part++;
        cout << "you find a battery Great \n";        
    }
}

void river_action(ST_Locations &location, ST_player &player, inventory &vetory){
    EN_river val = river();
    if(val == EN_river::illnessess_river){
        player.energy--;
        player.n_control++;
        player.health--;
        cout << "You Have A Massive lack , you are sick \n";        
    }else if(val == EN_river::nothing_r){
        player.energy--;
        player.n_control++;
        cout << "You re Wast your time \n";        
    }else if(val == EN_river::river_fishe){
        player.energy--;
        player.n_control++;
        vetory.core_items.food++;
        cout << "You find a fish its food \n";
    }else if(val == EN_river::lot_water){
        player.energy--;
        player.n_control++;
        cout << "Waterrrrrrrrrrr a loooot of wateeeeeeer \n";
        vetory.core_items.water += 2;        
    }
}

void forest_action(ST_Locations &location, ST_player &player, inventory &vetory){
    EN_Forest val = forest();
    if(val == EN_Forest::nothing_f){
        player.energy--;
        player.n_control++;
        cout << "You re Wast your time \n";        
    }else if(val == EN_Forest::wod){ // يتوافق تماماً مع enum EN_Forest { wod } المعرف لديك
        player.energy--;
        player.n_control++;
        cout << "You Find A wood \n";
        vetory.core_items.wood++;        
    }else if(val == EN_Forest::wolf_forest){
        if(vetory.tool.knife >= 1 && vetory.tool.spear >= 1){
            player.energy--;
            player.n_control++;
            vetory.electron.electronique_part++;
            cout << "Oooops a bunch of wolves attack you but you have a knife and nothing happend to you \n";
            cout << "You got electronique part is very important thing \n";
        }else{
            player.energy--;
            player.n_control++;
            player.health--;
            cout << "Bunch of wolves attack you and you dont have a knife so yeah you got a damged \n";            
        }
    }else if(val == EN_Forest::fruit){
        player.energy--;
        player.n_control++;
        vetory.core_items.food++;
        cout << "You got a food its fruits \n";        
    }
}

void plan_site_actons(ST_Locations &location, ST_player &player, inventory &vetory){
    EN_plane val = plane();
    if(val == EN_plane::piece_electronique){
        player.energy--;
        player.n_control++;
        vetory.electron.wires++;
        vetory.electron.battery++;
        cout << "What is this , its great You find a wires and battery i cant beleive it wooow ! \n";        
    }else if(val == EN_plane::minerals){
        player.energy--;
        player.n_control++;
        if (vetory.tool.axe >= 1) {
            vetory.core_items.stone += 2;
            cout << "You found a  2 stone Woow \n";
        }
        else {
            vetory.core_items.stone++;
            cout << "You founf a stone Woow \n";
        }
    }
    else if(val == EN_plane::nothing_p){
        player.energy--;
        player.n_control++;
        cout << "You Wast Your Time AGain \n";        
    }else if(val == EN_plane::tools){
        player.energy--;
        player.n_control++;        
        vetory.tool.spear++;
        vetory.craft.metal++;
        cout << "You find a spear \n";
    }else if(val == EN_plane::fire_planeSite){
        player.energy--;
        player.n_control++;
        player.health--;
        cout << "Fire Fire Fire you  are bleeding right now \n";        
    }else if(val == EN_plane::radio_plane_site){
        player.energy--;
        player.n_control++;
        player.health--;
        cout << "radio radio nuclear \n";        
    }
}

void run_explore(ST_Locations &loc, ST_player &player, inventory &vetory){
    if(loc.realy_location == loc.location[0]){
        beachit_action(loc, player, vetory);
    }else if(loc.realy_location == loc.location[1]){
        cave_action(loc, player, vetory);
    }else if(loc.realy_location == loc.location[2]){
        forest_action(loc, player, vetory);
    }else if(loc.realy_location == loc.location[3]){
        plan_site_actons(loc, player, vetory);
    }else if(loc.realy_location == loc.location[4]){
        river_action(loc, player, vetory);
    }
}
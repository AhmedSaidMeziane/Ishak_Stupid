#pragma once
#include<iostream>
using namespace std;



struct ST_player{
    int health  = 10;
    int hunger = 10;
    int water = 10;
    int energy = 10;
    int day = 0;

    string time[3] = {"morning","afternoon","night"};
    int n_control = 0;
    string realtime = time[n_control];
};

//================ BEACH ================

enum EN_beach {
    water_less,
    fishe,
    wood,
    Less_beach,
    nothing
};


//================ FOREST ================

enum EN_Forest {
    wod, //0
    fruit,
    wolf_forest,
    animal,
    nothing_f
};


//================ RIVER ================

enum EN_river {
    lot_water,
    river_fishe,
    illnessess_river,
    nothing_r
};

//================ CAVE ================

enum EN_cave {
    Minerals,
    battery,
    rare_tools,
    bear_cave,
    dark_cave,
    nothing_c
};

//================ PLANE ================

enum EN_plane{
    piece_electronique,
    minerals,
    tools,
    fire_planeSite,
    radio_plane_site,
    nothing_p
};



//================ LOCATIONS ================

struct ST_Locations{
    
    string location[5] = {"beach","cave","forest","plane","river"};
    string realy_location = "plane";
};

struct ST_inventory_core_items{
    int wood = 0;
    int water = 0;
    int stone = 0; //All Lacations but its rare
    int food = 10;
};

struct ST_inventory_crafting_materials{
    int metal = 0;
};
struct electronique
{
    int battery = 0;
    int electronique_part = 0;
    int wires = 0;
    int radio_chip = 0;
};
struct inventory_medical{
    int medicins = 0;
    int bandages = 0;
};

struct toools{
    int axe = 0;
    int spear = 0;
    int knife = 0;
    int torch = 0;
};

struct inventory{
    ST_inventory_core_items core_items;
    electronique electron;
    toools tool;
    ST_inventory_crafting_materials craft;
    inventory_medical medical;
    int radio = 0;
};
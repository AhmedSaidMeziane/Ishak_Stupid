#include<iostream>
#include"UI.h"
#include"input_output.h"
#include"DATA_GAME.h"

using namespace std;

// ================= UI =================
void prequist() {
    cout << "1- Axe: Stone -> 1 And Wood -> 1 \n";
    cout << "2- Spear: Stone -> 2 And Wood -> 1 \n";
    cout << "3- Radio Chip: Metal -> 1 And Battery -> 1 And Electronique_part -> 1 \n";
    cout << "4- Medcins: Food -> 2 And Water -> 1 \n";
    cout << "5- Bandages: Food -> 1 And Water -> 1 \n";
    cout << "6- Radio-For-Win: Wires->3 And Battery -> 2 And Radio-chip ->1 \n";
    cout << "7- Torch: Wood -> 1 And Battery -> 1 \n";
    cout << "8- Remark \n";
}

// ================= FAIL =================
void not_enough() {
    cout << "Not Enough materials \n";
}

// ================= ANNOYING =================
void Annoying(inventory& v) {
    if (v.core_items.stone > 0) {
        v.core_items.stone--;
    }
    cout << "I take just one stone because you are annoying me \n";
}

// ================= AXE =================
void craft_Axe(inventory& v) {
    if (v.core_items.stone >= 1 && v.core_items.wood >= 1) {

        v.tool.axe++;

        if (v.core_items.stone > 0) v.core_items.stone--;
        if (v.core_items.wood > 0) v.core_items.wood--;

        cout << "You crafted Axe \n";
    }
    else {
        not_enough();
    }
}

// ================= SPEAR =================
void craft_spear(inventory& v) {
    if (v.core_items.stone >= 2 && v.core_items.wood >= 1) {

        v.tool.spear++;

        if (v.core_items.stone >= 2) v.core_items.stone -= 2;
        else v.core_items.stone = 0;

        if (v.core_items.wood > 0) v.core_items.wood--;

        cout << "You crafted Spear \n";
    }
    else {
        not_enough();
        Annoying(v);
    }
}

// ================= RADIO CHIP =================
void craft_radio_chip(inventory& v) {
    if (v.craft.metal >= 1 && v.electron.battery >= 1 && v.electron.electronique_part >= 1) {

        v.electron.radio_chip++;

        if (v.craft.metal > 0) v.craft.metal--;
        if (v.electron.battery > 0) v.electron.battery--;
        if (v.electron.electronique_part > 0) v.electron.electronique_part--;

        cout << "You crafted Radio Chip \n";
    }
    else {
        not_enough();
    }
}

// ================= RADIO =================
void radio(inventory& v) {
    if (v.electron.radio_chip >= 1 && v.electron.wires >= 3 && v.electron.battery >= 2) {

        v.electron.radio_chip--;

        if (v.electron.wires >= 3) v.electron.wires -= 3;
        else v.electron.wires = 0;

        if (v.electron.battery >= 2) v.electron.battery -= 2;
        else v.electron.battery = 0;

        cout << "You completed radio mission \n";
    }
    else {
        not_enough();
        Annoying(v);
    }
}

// ================= MEDICAL =================
void medical(inventory& v) {
    if (v.core_items.food >= 2 && v.core_items.water >= 1) {

        v.medical.medicins++;

        if (v.core_items.food >= 2) v.core_items.food -= 2;
        else v.core_items.food = 0;

        if (v.core_items.water > 0) v.core_items.water--;

        cout << "You crafted medicine \n";
    }
    else {
        not_enough();
    }
}

// ================= BANDAGE =================
void bandage(inventory& v) {
    if (v.core_items.food >= 1 && v.core_items.water >= 1) {

        v.medical.bandages++;

        if (v.core_items.food > 0) v.core_items.food--;
        if (v.core_items.water > 0) v.core_items.water--;

        cout << "You crafted bandage \n";
    }
    else {
        not_enough();
    }
}

// ================= TORCH =================
void craft_torch(inventory& v) {
    if (v.core_items.wood >= 1 && v.electron.battery >= 1) {

        v.tool.torch++;

        if (v.core_items.wood > 0) v.core_items.wood--;
        if (v.electron.battery > 0) v.electron.battery--;

        cout << "You crafted Torch \n";
    }
    else {
        not_enough();
    }
}

// ================= RUN =================
void run_craft(inventory& v, ST_player& player) {
    prequist();

    int x = proccess::input_number();

    switch (x) {
    case 1: craft_Axe(v); break;
    case 2: craft_spear(v); break;
    case 3: craft_radio_chip(v); break;
    case 4: medical(v); break;
    case 5: bandage(v); break;
    case 6: radio(v); break;
    case 7: craft_torch(v); break;

    case 8:
        Annoying(v);
        player.health--;
        cout << "Health -- \n";
        break;

    default:
        cout << "Invalid option \n";
        break;
    }
}
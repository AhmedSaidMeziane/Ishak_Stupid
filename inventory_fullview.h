#include<iostream>
#include"input_output.h"
#include"DATA_GAME.h"
using namespace std;

void full_view(inventory vetory) {
	cout << "=================Items-part================= \n";
	cout << "Wood: " << vetory.core_items.wood << "\n";
	cout << "Water: " << vetory.core_items.water << "\n";
	cout << "Stone: " << vetory.core_items.stone << "\n";
	cout << "Food: " << vetory.core_items.food << "\n";
	cout << "Metal: " << vetory.craft.metal << "\n";
	cout << "=================Electronique-part================= \n";
	cout << "battery: " << vetory.electron.battery << "\n";
	cout << "electronique part: " << vetory.electron.electronique_part << "\n";
	cout << "Wires: " << vetory.electron.wires << "\n";
	cout << "Radio chip: " << vetory.electron.radio_chip << "\n";
	cout << "=================Medical-part================= \n";
	cout << "Medcins: " << vetory.medical.medicins << "\n";
	cout << "Bandages: " << vetory.medical.bandages << "\n";
	cout << "=================Tools-part================= \n";
	cout << "Axe: " << vetory.tool.axe << "\n";
	cout << "Spear: " << vetory.tool.spear << "\n";
	cout << "knife: " << vetory.tool.knife << "\n";
	cout << "torch: " << vetory.tool.torch << "\n";
}
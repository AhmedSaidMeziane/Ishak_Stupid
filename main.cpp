#include<iostream>
#include"DATA_GAME.h"
#include"run_game.h"


int main() {
	ST_player player1;
	srand(time(0));
	inventory v;
	ST_Locations loc;
	loop_game(player1,v,loc);
	return 0;
}

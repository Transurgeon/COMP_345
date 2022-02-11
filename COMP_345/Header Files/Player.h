#pragma once
#ifndef COMP_345_Player_h
#define COMP_345_Player_h

#include <iostream>;
#include <string>;
#include "../Header Files/Map.h"
#include "../Header Files/Cards.h"
#include "../Header Files/Orders.h"
using namespace std;

class Player {

private:
	vector<int>* territoryNum;
	vector<int>* cards;//vector<Cards>* cards;
	Player(); 
	Player(vector<int>* t, vector<int>* cards);
	void toDefend(); // might do []Territory* instead of void
	void toAttack(); 
	Order issueOrder();

	~Player();
};
#endif

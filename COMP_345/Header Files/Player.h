#pragma once
#ifndef COMP_345_Player_h
#define COMP_345_Player_h

#include <iostream>;
#include <string>;
#include "../Header Files/Map.h"
using namespace std;

class Player {

public:
	Player();

	void toDefend();
	void toAttack();
	/*Order issueOrder();*/

	~Player();
};
#endif

#pragma once
#ifndef COMP_345_Player_h
#define COMP_345_Player_h

#include <iostream>;
#include <string>;
#include <vector>;
#include "../Header Files/Map.h"
#include "../Header Files/Cards.h"
#include "../Header Files/Orders.h"
using namespace std;

class Player {

private:
	vector<Territory>* territoriesNum;
	vector<Card>* playerCards; //vector<Cards>* cards;
	OrdersList* playerOrders;

public:
	Player();
	Player(const Player& copy);
	Player& operator =(const Player& copy);

	void assignTerritories();
	void toDefend(); // might do []Territory* instead of void
	void toAttack(); 
	vector<Territory>* getTerritoriesNum();
	vector<Card>* getPlayerCards();
	OrdersList* getPlayerOrders();
	Order issueOrder();

	~Player();

	friend ostream& operator<<(ostream& output, Player& p);
};
#endif

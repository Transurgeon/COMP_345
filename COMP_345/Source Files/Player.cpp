#include "../Header Files/Player.h"

Player::Player() {

}

Player::Player(const Player& copy) {

}

Player& Player::operator =(const Player& copy) {

}

void Player::assignTerritories() {

}

void Player::toDefend() {
	
	vector<Territory>* territories = getTerritoriesNum();

	 for (int i = 0; i < territories.size(); i++)
	{
		 bool defended = false;
		 for (auto &territory: territories)
		 {

		 }
		 

	};
	/*
	* 
	array[] = needDefend;
	for (0->territories) {
	bool defended = false;
	for each(territory){
		if ()
	}
	

	needDefend.add(territory)
	}
	*/
}

void Player::toAttack() {
	vector<Territory>* territories = getTerritoriesNum();

	for (int i = 0; i < territories.size(); i++)
	{
		bool defended = false;
		for (auto& territory : territories)
		{

		}


	};
	/*
	*
	array[] = toAttack;
	for (0->territories) {
	bool attack = false;
	toAttack.add(territory.edges)
	toAttack.removeDuplicates();

	cout<< toAttack();
	}

	*/
}
vector<Territory>* Player::getTerritoriesNum() {
	return territoriesNum;
}
vector<Card>* Player::getPlayerCards() {
	return playerCards;
}
OrdersList* Player::getPlayerOrders() {
	return playerOrders;
}
void Player::assignTerritories(){
	
}

Order Player::issueOrder() {

}

Player::~Player() {

}

ostream& operator<<(ostream& output, const Player& p) {

}
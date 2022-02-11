#pragma once
#ifndef COMP_345_Cards_h
#define COMP_345_Cards_h

#include <iostream>;
using namespace std;

class Card {
private:
	vector<string> Card_types = { "bomb", "reinforcement", "blockade", "airlift", "displomacy" };
	string* type;
public: 
	Card();
	~Card();
	void play();
	
};

class Deck
{
public:
	Deck();
	~Deck();

	void draw();

};

class Hand
{
public:
	[] Card* warzoneCards;
	Hand();
	~Hand();

};

#endif


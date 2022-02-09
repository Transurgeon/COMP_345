#pragma once
#ifndef COMP_345_Cards_h
#define COMP_345_Cards_h

#include <iostream>;
using namespace std;

class Card {
	Card();
	void play();
	Card* bomb;
	Card* reinforcement;
	Card* blockade;
	Card* airlift;
	Card* diplomacy;
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
	Hand();
	~Hand();

	[] Card* warzoneCards;

};

#endif


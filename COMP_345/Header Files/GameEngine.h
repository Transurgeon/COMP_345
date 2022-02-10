#pragma once
#ifndef COMP_345_GameEngine_h
#define COMP_345_GameEngine_h

#include <iostream>;
using namespace std;

class GameEngine {
private:
	int NumberOfPlayer;

	GameEngine();
	GameEngine(const GameEngine& game);
	GameEngine& operator =(const GameEngine& copy);
	~GameEngine();

};

#endif
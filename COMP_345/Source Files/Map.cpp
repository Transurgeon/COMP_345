#include "../Header Files/Map.h"
#include <iostream>
using namespace std;

Map::Map() 
{

}

bool Map:: validate()
{

}

Map::Map(vector<Territory>* t, vector<Continent>* c, vector<Borders>* b)
{

}

Map::Map(const Map& copy)
{

}

Map& Map::operator =(const Map& copy) //added Map::operator and put the Map reference in front to create a deep copy
{

}

ostream& operator<<(ostream& output, const Map& m)
{

}

Map::~Map()
{

}

Territory::Territory() 
{

}

Territory::Territory(int* c, int* cn, string* t)
{

}

Territory::Territory(const Territory& copy)
{

}

Territory& Territory::operator =(const Territory& copy)
{

}

void Territory::setPlayer(int* p)
{

}

int Territory::getContinent()
{
	return *continent;
}

int Territory::getCountryNum()
{
	return *countryNum;
}

string Territory::getName()
{
	return *title;
}

int Territory::getPlayer()
{
	return *playerNum;
}

Territory::~Territory()
{

}

ostream& operator<<(ostream& output, const Territory& t)
{

}

Continent::Continent()
{

}

Continent::Continent(int* c, int* b, string* n)
{

}

Continent& Continent::operator =(const Continent& copy)
{

}

int Continent::getContinentNum()
{
	return *continentNum;
}

int Continent::getBonus()
{
	return *bonus;
}

string Continent::getContinentName()
{
	return *continentName;
}

ostream& operator<<(ostream& output, const Continent& c)
{

}

Continent::~Continent()
{

}

Borders::Borders()
{

}

Borders::Borders(int* r, vector<int>* e)
{

}

Borders::Borders(const Borders& copy)
{

}

Borders& Borders::operator =(const Borders& copy)
{

}

int Borders::getRoot()
{
	return *root;
}

vector<int> Borders::getEdges()
{
	return *edges;
}

ostream& operator<<(ostream& output, const Borders& b)
{

}

Borders::~Borders()
{

}

MapLoader::MapLoader()
{

}

Map MapLoader::CreateMap()
{

}

void MapLoader::readMapFile()
{

}

MapLoader::MapLoader(const MapLoader& copy)
{

}

MapLoader& MapLoader::operator =(const MapLoader& copy)
{

}

MapLoader::~MapLoader()
{

}

ostream& operator<<(ostream& output, const MapLoader& ml)
{

}
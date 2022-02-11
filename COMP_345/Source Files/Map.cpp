#include "../Header Files/Map.h"
#include <iostream>;
#include <vector>;
using namespace std;

/// <summary>
/// Map
/// </summary>
Map::Map() 
{

}

bool Map::validate()
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
/// <summary>
/// Territory
/// </summary>
Territory::Territory() 
{

}

Territory::Territory(int* c, int* cn, string* t) 
{
	*this->continent = *c;
	*this->countryNum = *cn;
	*this->title = *t;
}

Territory::Territory(const Territory& copy)
{
	*continent = *copy.continent;
	*countryNum = *copy.countryNum;
	*title = *copy.title;
	*playerNum = *copy.playerNum;
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

ostream& operator<<(ostream& output, Territory& t) 
{
	output << " This territory is called" << t.getName() << " the country number is:" << t.getCountryNum()<< endl;
	output << " This territory is part of the continent number: " << t.getContinent() << " it is owned by" << t.getName() << endl;
	return output;
}
/// <summary>
/// Continent
/// </summary>
Continent::Continent()
{

}

Continent::Continent(int* c, int* b, string* n)
{

}

Continent::Continent(const Continent& copy) {
	*continentNum = *copy.continentNum;
	*bonus = *copy.bonus;
	*continentName = *copy.continentName;
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
/// <summary>
/// Borders
/// </summary>
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
/// <summary>
/// MapLoader
/// </summary>
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
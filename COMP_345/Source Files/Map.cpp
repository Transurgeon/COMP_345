#include "../Header Files/Map.h"
#include <iostream>;

using namespace std;

/// <summary>
/// Map
/// </summary>
Map::Map() 
{
	
}

Map::Map(vector<Territory>* t, vector<Continent>* c, vector<Borders>* b) 
{
	territories = t;
	continents = c;
	borders = b;
}

Map::Map(const Map& copy)
{
	territories = copy.territories;
	continents = copy.continents;
	borders = copy.borders;
}

Map& Map::operator =(const Map& copy) //added Map::operator and put the Map reference in front to create a deep copy
{
	territories = copy.territories;
	continents = copy.continents;
	borders = copy.borders;
	return *this;
}

bool Map::validate()
{
	return true;
}

ostream& operator<<(ostream& output, const Map& m)
{
	output << "Number of territories: "<< *m.territories.size() << ", number of continents: " << *m.continents.size() << ", number of borders: " << *m.borders.size() << endl;
	return output;
}

Map::~Map()
{
	delete territories;
	delete continents;
	delete borders;
	territories = NULL;
	continents = NULL;
	borders = NULL;
}

/// <summary>
/// Territory
/// </summary>
Territory::Territory() 
{
	continentNum = new int(-1);
	countryNum = new int(-1);
	title = new string("");
	playerNum = new int(-1);
}

Territory::Territory(int* con, int* cou, string* t) 
{
	continentNum = con;
	countryNum = cou;
	title = t;
	playerNum = new int(-1);
}

Territory::Territory(const Territory& copy)
{
	continentNum = new int(copy.continentNum);
	countryNum = new int(copy.countryNum);
	title = new string(copy.title);
	playerNum = new int(copy.playerNum);
}

Territory& Territory::operator =(const Territory& copy)
{
	continentNum = new int(copy.continentNum);
	countryNum = new int(copy.countryNum);
	title = new string(copy.title);
	playerNum = new int(copy.playerNum);
	return *this;
}

void Territory::setPlayer(int* p)
{
	playerNum = p;
}

int Territory::getContinentNum()
{
	return *continentNum;
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
	delete continentNum;
	delete countryNum;
	delete title;
	delete playerNum;
	continentNum = NULL;
	countryNum = NULL;
	title = NULL;
	playerNum =	NULL;
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

ostream& operator<<(ostream& output, Continent& c)
{
	output << " This continent is called : " << c.getContinentName() << " and is the continent number :" << c.getContinentNum() << endl;
	output << " Holding this continent gives a bonus of : " << c.getBonus() << " troups per round" << endl;
	return output;
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
	*root = *copy.root;
	*edges = *copy.edges;
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

ostream& operator<<(ostream& output, Borders& b)
{
	/*output << " This territory is called" << t.getName() << " the country number is:" << t.getCountryNum() << endl;
	output << " This territory is part of the continent number: " << t.getContinent() << " it is owned by" << t.getName() << endl;
	return output;*/
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

ostream& operator<<(ostream& output, MapLoader& ml)
{
	/*output << " This territory is called" << t.getName() << " the country number is:" << t.getCountryNum() << endl;
	output << " This territory is part of the continent number: " << t.getContinent() << " it is owned by" << t.getName() << endl;
	return output;*/
}
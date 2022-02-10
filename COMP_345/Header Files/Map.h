#pragma once
#ifndef COMP_345_Map_h
#define COMP_345_Map_h

#include <iostream>;
#include <string>;
#include <fstream>;
#include <vector>

using namespace std;

class Map {
private:
    vector<Territory> *territories;
    vector<Continent> *continents;
    vector<Borders> *borders;

public:
    
    Map();
    Map(vector<Territory>* ter, vector<Continent>* con, vector<Borders>* bor);
    Map(const Map& copy);
    Map& operator =(const Map& copy);


    bool validate();
  
    ~Map();
};

class Borders {

private:
    Territory* root;
    Territory* edges[];

public:
    Borders();
    Borders(Territory& rt, Territory& edg);
    Borders(const Borders& copy);
    Borders& operator =(const Borders& copy);
    ~Borders();
};


class Territory{
private:
    int continent;
    int countryNum;
    string title;

public:
    Territory();
    Territory(string &title, int continent, int countryNum); //use constructor initialization list
    Territory(const Territory& copy);
    Territory& operator =(const Territory& copy);
    string getName();
    int getContinent();
    int getCountryNum();
    ~Territory();
};


class Continent{
private: 
    int continentNum;
    int bonus;
    string continentName;

public:
    Continent();

    Continent(Territory*[]);
    Continent(const Continent& copy);
    Continent& operator =(const Continent& copy);
    ~Continent();
};


class MapLoader {

    MapLoader();
    Map CreateMap(); //create a map object from reading the .map file
    void readMapFile(); //might need to add input stream or remove completely
    MapLoader(const MapLoader& copy);
    MapLoader& operator =(const MapLoader& copy);
    ~MapLoader();
};

#endif
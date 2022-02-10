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
    Map(Territory *[], Continent *[], Borders *[]);

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

    ~Continent();
};


class MapLoader {

    MapLoader();
    Map CreateMap(); //create a map object from reading the .map file
    void readMapFile(); //might need to add input stream or remove completely
    ~MapLoader();
};

#endif
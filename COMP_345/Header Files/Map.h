#pragma once
#ifndef COMP_345_Map_h
#define COMP_345_Map_h

#include <iostream>;
#include <string>;
#include <fstream>;
using namespace std;

class Map {
public:
    
    Map();

    bool validate();
    Map(Territory* [], Continent* [], Borders* []);
    ~Map();
};

class Territory:Map {
public:
    int continent;
    int countryNum;
    string title;

    Territory();
    Territory(string &title, int continent, int countryNum); //use constructor initialization list
    ~Territory();
};


class Continent:Map {
public: 
    int continentNum;
    int bonus;
    string continentName;
    Continent();

    Continent(Territory*[]);

    ~Continent();
};

class Borders:Map {

public: 
    Territory* root;
    Territory* edges;

    Borders();
    Borders(Territory &rt, Territory &edg);

    ~Borders();
};

class MapLoader:Map,Continent,Borders,Territory {

    MapLoader();
    Map CreateMap(); //create a map object from reading the .map file
    void readMapFile(); //might need to add input stream or remove completely
    ~MapLoader();
};

#endif
#pragma once
#ifndef COMP_345_Map_h
#define COMP_345_Map_h

#include <iostream>;
#include <string>;
using namespace std;

class Map {
public:
    Map();


    bool validate();

    ~Map();
};

class Territory {
public:
    int continent;
    int countryNum;
    string title;


    Territory();
    Territory(string &title, int continent, int countryNum);
    ~Territory();
};


class Continent {
public: 
    int continentNum;
    int bonus;
    Continent();


    ~Continent();
};

class Borders {

public: 
    Territory* root;
    Territory* edges;

    Borders();
    Borders(Territory &rt, Territory &edg);

    ~Borders();
};

class MapLoader {

    MapLoader();



    ~MapLoader();
};

#endif
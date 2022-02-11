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
    Map(vector<Territory>* t, vector<Continent>* c, vector<Borders>* b);
    Map(const Map &copy);
    Map& operator =(const Map &copy);
    bool validate();
    ~Map();
    friend ostream &operator<<(ostream &output, const Map &m);
};

class Territory{
private:
    int *continent;
    int *countryNum;
    string *title;
    int* playerNum;

public:
    Territory();
    Territory(int *c, int *cn, string *t); //use constructor initialization list
    Territory(const Territory &copy);
    Territory &operator =(const Territory &copy);
    void setPlayer(int *p);
    int getContinent();
    int getCountryNum();
    string getName();
    int getPlayer();
    ~Territory();

    friend ostream &operator<<(ostream &output, const Territory &t);
};


class Continent{
private: 
    int *continentNum;
    int *bonus;
    string *continentName;

public:
    Continent();
    Continent(int *c, int *b, string *n);
    Continent(const Continent& copy);
    Continent& operator =(const Continent& copy);
    int getContinentNum();
    int getBonus();
    string getContinentName();
    ~Continent();
    friend ostream& operator<<(ostream& output, const Continent& c);
};

class Borders {

private:
    int *root;
    vector<int> *edges;

public:
    Borders();
    Borders(int *r, vector<int> *e);
    Borders(const Borders &copy);
    Borders &operator =(const Borders &copy);
    int getRoot();
    vector<int> getEdges();
    ~Borders();
    friend ostream &operator<<(ostream& output, const Borders &b);
};

class MapLoader {
    //should add string = path file, maybe use user input instead
    MapLoader();
    Map CreateMap(); //create a map object from reading the .map file
    void readMapFile(); //might need to add input stream or remove completely
    MapLoader(const MapLoader& copy);
    MapLoader& operator =(const MapLoader& copy);
    ~MapLoader();
    friend ostream& operator<<(ostream& output, const MapLoader& ml);
};

#endif
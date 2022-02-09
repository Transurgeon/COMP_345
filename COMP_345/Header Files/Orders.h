#pragma once
#ifndef COMP_345_Orders_h
#define COMP_345_Orders_h

#include <iostream>;
#include <string>;
using namespace std;

class Order {
public:
	Order();
	
	void execute();
	bool validate();

	~Order();
};

class OrdersList {
public:
	[] Order* OrderList;

	void move();
	void remove();

	OrdersList();
	OrdersList(Order* []);
	~OrdersList();

};
#endif

#pragma once
#ifndef COMP_345_Orders_h
#define COMP_345_Orders_h

#include <iostream>;
#include <string>;
using namespace std;

class Order {
public:
	Order();

	void move();
	void remove();
	bool validate();

	~Order();
};

class OrdersList {
public:
	[] Order* OrderList;

	OrdersList();

	~OrdersList();

};
#endif

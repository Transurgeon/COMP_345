#pragma once
#ifndef COMP_345_Orders_h
#define COMP_345_Orders_h

#include <iostream>;
#include <string>;
#include <vector>;
using namespace std;

class Order {

public:
	Order();
	Order(const Order& copy);
	Order& operator =(const Order& copy);
	
	void execute();
	bool validate();

	~Order();
	friend ostream& operator<<(ostream& output, Order& o);
};

class OrdersList {
private:
	vector<Order>* OrderList;

public:
	OrdersList();
	OrdersList(const OrdersList& copy);
	OrdersList& operator =(const OrdersList& copy);

	void move();
	void remove();

	~OrdersList();
	friend ostream& operator<<(ostream& output, OrdersList& ol);
};
#endif

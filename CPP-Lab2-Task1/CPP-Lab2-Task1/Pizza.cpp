#ifndef PIZZA_CPP
#define PIZZA_CPP

#include "Pizza.h"

Pizza::Pizza() :Pizza(STTOP, STSIZE, STPRICE) {};

Pizza::Pizza(string topping) {
	this->topping = topping;
	this->diameter = STSIZE;
	this->price = STPRICE;
};
Pizza::Pizza(string topping, int diameter) {
	this->topping = topping;
	this->diameter = diameter;
	this->price = STPRICE;
};
Pizza::Pizza(string topping, int diameter, double price) {
	this->topping = topping;
	this->diameter = diameter;
	this->price = price;
};

void Pizza::displayValues() {
	cout << to_string(diameter) + " " + topping + " " << price << endl;
}

void Pizza::setValues() {
	cout << "Topping "; cin >> topping;
	if (topping != STTOP) {
		price += 1;
	}
	cout << "Size "; cin >> diameter;
	if (diameter != STSIZE) {
		price += 1.5;
	}
}

const string Pizza::STTOP = "cheese";
const int Pizza::STSIZE = 12;
const double Pizza::STPRICE = 8.99;


#endif
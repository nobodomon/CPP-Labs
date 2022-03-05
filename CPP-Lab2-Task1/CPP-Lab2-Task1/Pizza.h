#pragma once

#include<iostream> 
#include<string>
using namespace std;

class Pizza {
private:
	string topping; int diameter; double price;
	const static string STTOP;
	const static int STSIZE;
	const static double STPRICE;
public:
	Pizza(const string = STTOP, const int = STSIZE, const double = STPRICE);
	void setValues();
	void displayValues();
};
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
	Pizza(string, int, double);
	Pizza(string, int);
	Pizza(string);
	Pizza();
	void setValues();
	void displayValues();
};
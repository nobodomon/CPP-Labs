#pragma once

#include <iostream>
#include "CreditData.h"
#include "Name.h"

using namespace std;

class Customer {
private:
	Name name;
	CreditData credit;
	string phoneNumber;
public:
	Customer(string, string, double, double, string);
	void showCustomer();
};
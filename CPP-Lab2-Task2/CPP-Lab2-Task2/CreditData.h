#pragma once

#include <iostream>

using namespace std;

class CreditData {
private:
	double currentBalance;
	double maxBalance;
public:
	CreditData(double, double = 0);
	void displayCreditData();
};
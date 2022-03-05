#ifndef CUSTOMER_CPP
#define CUSTOMER_CPP

#include "Customer.h"
#include "Name.h"
#include "CreditData.h"

Customer::Customer(string fname, string lname, double bal, double lim, string phone) :name(fname, lname), credit(bal, lim) {
	name = Name(fname, lname);
	credit = CreditData(bal, lim);
	phoneNumber = phone;
}

void Customer::showCustomer() {
	cout << "Customer ";
	name.displayFullName(); cout << phoneNumber << endl;
	credit.displayCreditData();

}

#endif
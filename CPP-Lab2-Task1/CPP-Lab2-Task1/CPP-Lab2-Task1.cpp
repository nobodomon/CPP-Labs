#include<iostream> 
#include<string>
#include"Pizza.h"
using namespace std;

int main() {
	Pizza stdPizza;
	Pizza special("pineapple");
	Pizza deluxeSpecial("sausage", 16);
	Pizza veryDeluxeSpecial("lobster", 20, 17.99);
	cout << "Standard "; stdPizza.displayValues();
	cout << "Special "; special.displayValues();
	cout << "Deluxe "; deluxeSpecial.displayValues();
	cout << "Very Deluxe "; veryDeluxeSpecial.displayValues();
	stdPizza.setValues(); cout << "New "; stdPizza.displayValues();
	return 0;
}
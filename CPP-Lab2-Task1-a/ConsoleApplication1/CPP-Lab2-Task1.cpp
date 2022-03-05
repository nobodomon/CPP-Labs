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
	Pizza() {
		this->topping = STTOP;
		this->diameter = STSIZE;
		this->price = STPRICE;
	};
	Pizza(string topping) {
		this->topping = topping;
		this->diameter = STSIZE;
		this->price = STPRICE;
	};
	Pizza(string topping, int diameter) {
		this->topping = topping;
		this->diameter = diameter;
		this->price = STPRICE;
	};
	Pizza(string topping, int diameter, double price) {
		this->topping = topping;
		this->diameter = diameter;
		this->price = price;
	};
	//Pizza(const string = STTOP, const int = STSIZE, const double = STPRICE) :topping(STTOP), diameter(STSIZE), price(STPRICE) {};
	void setValues() {
		cout << "Topping ";
		cin >> topping;
		if (topping != STTOP) {
			price += 1;
		}
		cout << "Size ";
		cin >> diameter;
		if (diameter != STSIZE) {
			price += 1.5;
		}
	};
	void displayValues() {
		cout << to_string(diameter) + " " + topping + " " << price << endl;
	};
};

const string Pizza::STTOP = "cheese";
const int Pizza::STSIZE = 12;
const double Pizza::STPRICE = 8.99;

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
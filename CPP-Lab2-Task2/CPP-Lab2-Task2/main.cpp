#include <iostream>
#include "Name.h"
#include "CreditData.h"
#include "Customer.h"
using namespace std;

int main() {
    int x;
    const int TIMES = 1;
    string first, middle, last, phone;
    double bal, lim;
    for (x = 0; x < TIMES; ++x) {
        cout << "Fname "; cin >> first;
        cout << "Lname "; cin >> last;
        cout << "Balance "; cin >> bal;
        cout << "Limit "; cin >> lim;
        cout << "Phone "; cin >> phone;
        Customer cust(first, last, bal, lim, phone);
        cust.showCustomer();
    }
    return 0;
}
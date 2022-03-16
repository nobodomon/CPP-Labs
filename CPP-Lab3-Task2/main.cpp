#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

using namespace std;

int main() {
	Package pk1("Bruce Lee", "1 Fighting Rd", "Hong Kong", "China", 12345, "Alice Wong", "Jurong Ave 1", "Jurong", "Singapore", 23456, 8.5, 0.5);
  TwoDayPackage pk2("Donald Trump", "1600 Pennsylvania Ave", "Washington", "USA", 34567, "Barack Obama", "21 Democary St", "Washington", "USA", 45678, 10.5, 0.65, 2.0);
  OvernightPackage pk3("Lee Hsien Loong", "1 Parlament Pl", "CBD", "Singapore", 56789, "Bob Tan", "Yishun Av 1", "Yishun", "Singapore", 67891, 12.25, 0.7, 0.25);

  //Package 1
  cout << "Package 1:" << endl;
  cout << "Sender: " << pk1.getSenderName() << endl;
  cout << pk1.getSenderAddress() << ", " << pk1.getSenderCity() << ", " << pk1.getSenderState() << endl;
  cout << "Recipient: " << pk1.getRecipientName() << endl;
  cout << pk1.getRecipientAddress() << ", " << pk1.getRecipientCity() << ", " << pk1.getRecipientState() << endl;
  cout << "Cost: " << pk1.calculateCost() << endl;

  cout << endl;
  
  //Package 2
  cout << "Package 2:" << endl;
  cout << "Sender: " << pk2.getSenderName() << endl;
  cout << pk2.getSenderAddress() << ", " << pk2.getSenderCity() << ", " << pk2.getSenderState() << endl;
  cout << "Recipient: " << pk2.getRecipientName() << endl;
  cout << pk2.getRecipientAddress() << ", " << pk2.getRecipientCity() << ", " << pk2.getRecipientState() << endl;
  cout << "Cost: " << pk2.calculateCost() << endl;
  
  cout << endl;
  //Package 3
  cout << "Package 3:" << endl;
  cout << "Sender: " << pk3.getSenderName() << endl;
  cout << pk3.getSenderAddress() << ", " << pk3.getSenderCity() << ", " << pk3.getSenderState() << endl;
  cout << "Recipient: " << pk3.getRecipientName() << endl;
  cout << pk3.getRecipientAddress() << ", " << pk3.getRecipientCity() << ", " << pk3.getRecipientState() << endl;
  cout << "Cost: " << pk3.calculateCost() << endl;
  
	return 0;
  // the code of this task can be quite long and detailed. so i share the code for package, twodaypackage, and overnightpackage with you. please integrate the files and complete this main function. 
}
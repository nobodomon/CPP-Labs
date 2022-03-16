#include <string>
#include <iostream>
#include "TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(const string& senderName,const  string& senderAddress,const  string& senderCity,const  string& senderState,const  int senderZIP,const  string& recipientName,const  string& recipientAddress,const  string& recipientCity,const  string& recipientState, int recipientZIP, double weight, double costPerKg, double flatFee):Package(senderName,senderAddress,senderCity,senderState,senderZIP,recipientName,recipientAddress,recipientCity,recipientState,recipientZIP,weight,costPerKg){
    this->flatFee = flatFee;
  };

double TwoDayPackage::calculateCost() const{
  return this->getWeight() * this->getCostPerKg() + this->flatFee;
}
#include <string>
#include <iostream>
#include "OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage(const string& senderName,const  string& senderAddress,const  string& senderCity,const  string& senderState,const  int senderZIP,const  string& recipientName,const  string& recipientAddress,const  string& recipientCity,const  string& recipientState, int recipientZIP, double weight, double costPerKg, double overnightFeePerKg):Package(senderName,senderAddress,senderCity,senderState,senderZIP,recipientName,recipientAddress,recipientCity,recipientState,recipientZIP,weight,costPerKg){
    this->overnightFeePerKg = overnightFeePerKg;
  };
  
  double OvernightPackage::calculateCost() const{
    return this->getWeight() * (this->getCostPerKg() + this->overnightFeePerKg);
  };


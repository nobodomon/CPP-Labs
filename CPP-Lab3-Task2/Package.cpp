#include <string>
#include <iostream>
#include "Package.h"
using namespace std;

Package::Package(const string& senderName,const  string& senderAddress,const  string& senderCity,const  string& senderState,const  int senderZIP,const  string& recipientName,const  string& recipientAddress,const  string& recipientCity,const  string& recipientState, int recipientZIP, double weight, double costPerKg){
    this->senderName = senderName;
    this->senderAddress = senderAddress;
    this->senderCity = senderCity;
    this->senderState = senderState;
    this->senderZIP = senderZIP;
    this->recipientName = recipientName;
    this->recipientAddress = recipientAddress;
    this->recipientCity = recipientCity;
    this->recipientState = recipientState;
    this->recipientZIP = recipientZIP;
    this->weight = weight;
    this->costPerKg = costPerKg;
  };
  //Package();
  
  void setSenderName(const string&);
  string Package::getSenderName() const{
    return this->senderName;
  };
  
  void setSenderAddress(const string&);
  string Package::getSenderAddress() const{
    return this->senderAddress;
  };
  
  void setSenderCity(const string&);
  string Package::getSenderCity() const{
    return this->senderCity;
  };
  
  void setSenderState(const string&);
  string Package::getSenderState()const{
    return this->senderState;
  };
  
  void setSenderZIP(int);
  int Package::getSenderZIP() const{
    return this->senderZIP;
  };
  
  void setRecipientName(const string&);
  string Package::getRecipientName() const{
    return this->recipientName;
  };
  
  void setRecipientAddress(const string&);
  string Package::getRecipientAddress() const{
    return this->recipientAddress;
    
  };
  
  void setRecipientCity(const string&);
  string Package::getRecipientCity() const{
    return this->recipientCity;
  };
  
  void setRecipientState(const string&);
  string Package::getRecipientState() const{
    return this->recipientState;
  };
  
  void setRecipientZIP(int);
  int Package::getRecipientZIP() const{
    return this->recipientZIP;
  };
  
  void setWeight(double);
  double Package::getWeight() const{
    return this->weight;
  };
  
  void setCostPerOunce(double);
  double Package::getCostPerKg() const{
    return this->costPerKg;
  };
  
  double Package::calculateCost(){
    return this->weight * this->costPerKg;
  };

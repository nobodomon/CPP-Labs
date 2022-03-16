#include<iostream>

using namespace std;

class Car {
protected:
	bool isIgnitionOn;
	int speed;
public:
	void showCar(){
    if(isIgnitionOn){
      cout << "Ignition is on. Speed is " << speed << "mph."<< endl;
    }else{
      cout << "Ignition is off. Speed is " << speed << "mph."<< endl;
    }
  };
	void turnIgnitionOn(){
    this->isIgnitionOn = true;
  };
	void turnIgnitionOff(){
    this->isIgnitionOn = false;
  };
	void setSpeed(int);
};

void Car::setSpeed(int speed){
  if(speed <= 65){
    this->speed = speed;
  }else{
    this->speed = 65;
  }
};

class Convertible: public virtual Car{
protected:
  bool isTopUp = true;
public:
  void putTopUp(){
    this->isTopUp = true;
  };
  void putTopDown(){
    this->isTopUp = false;
  };
  void showCar(){
    Car::showCar();
    if(isTopUp){
      cout << "Top is up." << endl;
    }else{
      cout << "Top is down." << endl;
    }
  };
};
class RaceCar: public virtual Car{
public:
  void setSpeed(int);
};

void RaceCar::setSpeed(int speed){
  if(speed <= 200){
    this->speed = speed;
  }else{
    this->speed = 200;
  }
}
class ConvertibleRaceCar : public Convertible, public RaceCar{
  
};
int main() {
	ConvertibleRaceCar aCar;
	aCar.turnIgnitionOn(); aCar.setSpeed(30);
	cout << "Car set to 30 mph: " << endl; aCar.showCar(); cout << endl;

	aCar.putTopDown(); aCar.setSpeed(80);
	cout << "Car set to 80 mph with top down: " << endl;
	aCar.showCar(); cout << endl;

	aCar.putTopUp(); aCar.setSpeed(250);
	cout << "Car set to 250 mph with top up: " << endl;
	aCar.showCar(); cout << endl;

	return 0;
}
#include<iostream>
using namespace std;
class Vehical{ //parent class
public:
    int topSpeed;
    float mileage;
    string fuel;
private:
    int bootSpace;    
};
class Car : public Vehical{ // child class 1 / derived class
public:
     bool sunroof;
};
class Bike : public Vehical{ // child class 2 / derived class
public:
    int engine_cc;
     
};
class Truck : public Vehical{ // child class 3 / derived class
public:
     int loadCapacity;
};
int main (){
    
    
}
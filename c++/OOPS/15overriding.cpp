#include<iostream>
using namespace std;
class Scooty{ //parent class
public: 
    int topSpeed;
    float mileage;
    void sound(){
        cout<<"Vroom Vroom"<<endl;
    }
private:
    int bootSpace;    
};
class Bike : public Scooty{ //child class / derived class
public:
    int gears; 
    
    void sound(){
        cout<<"Dhoom Dhoom"<<endl;
    }
};
int main (){
    // Bike* b= new Bike(); //object pointer
    // b->sound();
    // Scooty* s= new Scooty(); //object pointer
    // s->sound();

    Scooty* b = new Bike();
    b->sound();

}
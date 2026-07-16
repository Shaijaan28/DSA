#include<iostream>
using namespace std;
class Cricketer{
public:
     string name;
     int runs ;
     float avg;

     Cricketer(string name, int runs, float avg){
        this->name = name ;
        this->runs = runs;
        this->avg = avg;
     }
};
int main (){
    Cricketer c1("Virat", 25000,55.2);
    Cricketer* c2= new Cricketer("Rohit",1800,45.2);

    cout<<c1.name <<" "<<c1.runs<<endl;
    cout<<c2->name<<" "<<c2->runs<<endl;
   
}
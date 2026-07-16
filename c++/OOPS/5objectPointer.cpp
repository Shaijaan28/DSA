#include<bits/stdc++.h>
using namespace std;
class Cricketer{
public:    
    string name;
    int runs;
    float avg;
    Cricketer(string name, int runs,float avg){
        this->name =name;
        this->runs =runs;
        this->avg = avg;
    }
    void print(){
        cout<<name<<" "<<runs<<" "<<avg<<endl;
    }
    int matches(){
        return runs/avg;
    }
};

int main (){
    Cricketer c1("Virat",25000,52.3);
    Cricketer c2("Babar",8000,50.1);
    
    Cricketer* p1 =&c1;
    cout<<(*p1).runs<<endl;
}
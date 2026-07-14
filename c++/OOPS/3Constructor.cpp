#include<iostream>
using namespace std;
//classj
class Student{ // student is a new data type
public:
    string name;
    int rno;
    float gpa;
    Student(){ //Default Constructor

    }

    //constructor
    Student(string s, int r, float g){ //Parameterised Constructor
        name = s;
        rno =r;
        gpa = g;
    }
    Student(string s, int r){ //Parameterised Constructor
        name = s;
        rno =r;
        
    }
};

int main (){
    Student s1("Rauf",49,6.55);
    Student s2; //without default constructor it 'll show error
    s2.name = "Sohail";
    s2.rno = 28;
    s2.gpa = 6.3;

    Student s3("Adil", 52);
    Student s4 = s1; //Deep copy 
    s4.name = "Salim";

    Student s5(s1); //Copy Constructor - Deep copy
    s5.name = "Sarfaraj";
   
    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<" "<<endl;
    cout<<s1.name<<" "<<s1.rno<<" "<<endl;
    cout<<s4.name<<" "<<s4.rno<<" "<<s4.gpa<<" "<<endl;
    cout<<s5.name<<" "<<s5.rno<<" "<<s5.gpa<<" "<<endl;
}
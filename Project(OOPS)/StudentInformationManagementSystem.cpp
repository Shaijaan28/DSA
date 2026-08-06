#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    int roll;
    string name;
    string branch;
    float marks;    
};

Student s[100];
int countStudent = 0;

void addStudent(){
    cout <<"\nEnter Roll Number: ";
    cin >> s[countStudent].roll;

    cin.ignore();

    cout <<"Enter Name: ";
    getline(cin,s[countStudent].name);

    cout<<"Enter Branch: ";
    getline(cin,s[countStudent].branch);

    cout<<"Enter Marks: ";
    cin>> s[countStudent].marks;

    countStudent++;

    cout<<"\nStudent Added Successfully.\n";

}

void displayStudent(){
    if(countStudent == 0){
        cout <<"\nNO Record Found.\n";
        return;
    }

    cout << "\n-------Student Records-------\n";
    
    for(int i=0;i<countStudent;i++){
        cout<<"\nRoll No : "<<s[i].roll<<endl;
        cout<<"Name : "<<s[i].name<<endl;
        cout<<"Branch : "<<s[i].branch<<endl;
        cout<<"Marks : "<<s[i].marks<<endl;
       
    }
}
void searchStudent(){
    int roll;
    cout<<"\nEnter Roll Number: ";
    cin >> roll;

    for(int i=0;i<countStudent;i++){
        if(s[i].roll==roll){
            cout<<"\nRecord Found\n";
            cout<<"Name: "<<s[i].name<<endl;
            cout<<"Branch: "<<s[i].branch<<endl;
            cout<<"Marks: "<<s[i].marks<<endl;
            return ;
        }
    }
    cout<<"\nStudent Not Found.\n";
}

void updateStudent(){
    int roll;
    cout<<"\nEnter Roll Number: ";
    cin >>roll;
    cin.ignore();
    for(int i=0;i<countStudent;i++){
        if(s[i].roll==roll){
            cout<<"Enter New Name: ";
            getline(cin,s[i].name);

            cout<<"Enter New Branch:";
            getline(cin,s[i].branch);

            cout<<"Enter New Marks: ";
            cin>>s[i].marks;

            cout<<"\nRecord Updated Successfully\n";
            return;
        }
    }

}

void deleteStudent(){
    int roll;
    cout<<"\nEnter Roll Number: ";
    cin >> roll;
    for(int i=0;i<countStudent;i++){
        if(s[i].roll==roll){
            for(int j=i;j<countStudent-1;j++){
                s[j]=s[j+1];
            }
            countStudent--;
            cout<<"\nRecord Deleted Successfully.\n";
            return;
        }
    }
    cout<<"\nStudent Not Found.\n";
}

int main (){
    int choice;
    do{
        cout<<"\n========Student Information Management=======\n";

        cout<<"1.Add Students\n";
        cout<<"2.Display Students\n";
        cout<<"3.Search Students\n";
        cout<<"4.Update Students\n";
        cout<<"5.Delete Students\n";
        cout<<"6.Exit\n";

        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice){
            case 1:
            addStudent();
            break;
            
            case 2:
            displayStudent();
            break;

            case 3:
            searchStudent();
            break;

            case 4:
            updateStudent();
            break;

            case 5:
            deleteStudent();
            break;

            case 6:
            cout<<"\nThank You!\n";
            break;

            default:
            cout<<"\nInvalid Choice\n";

        }

    }while(choice!=6);
    return 0;

}
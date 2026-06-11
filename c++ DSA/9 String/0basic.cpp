#include<iostream>
using namespace std;
int main (){
    // char str[]={'a','d','f','\0'};
    // char str2[]="hello";
    // cout << str << endl;
    // cout << str2[2]<< endl;

    // take input
    // char str3[12];
    // cout << "enter char array : ";
    // cin.getline(str3,12);
    // for(char ch : str3){
    //     cout << ch << " ";
    // }

   // cout << "outputut: "<< str3 << endl;
    //cout << endl;

    //find length string
    
    // char str[]="shaijaan rauf";
    // int len =0;
    // for(int i=0;i<str[i]!='\0';i++){
    //     len++;
    // }
    // cout << "length of string: "<< len << endl;

    // return 0;

    //inbuild string

    string str = "shaijaan rauf";//dynamic in nature -> runtime resize
    cout << str << endl;

    string str1 ="apna";
    string str2 ="college";
    string str3 = str1+str2;

    // string input
    string str4;
    getline(cin, str);
    cout <<"output : "<< str << endl;
    return 0;
}

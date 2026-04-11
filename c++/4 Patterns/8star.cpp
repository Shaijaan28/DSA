#include<iostream>
using namespace std;
int main (){
  int m;
  cout<< "Enter lenght : ";
  cin>> m;
  int n;
  cout << "Enter breath : ";
  cin >> n;
  
  for (int i=1 ; i<=m; i++){
    for(int j=1;i<=n; j++){

        cout << " *";
    }
    cout << endl;
  }
 
    return 0;
}
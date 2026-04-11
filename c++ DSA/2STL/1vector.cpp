#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};//o
   // vec.erase(vec.begin());
   // vec.erase(vec.begin()+2);
  //  vec.erase(vec.begin()+1, vec.begin()+3);
 //   vec.insert(vec.begin()+2, 100);
    vec.clear();

    //vector<int> vec(5, 10); //

    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.emplace_back(6);
    // vec.pop_back();

    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

   // cout <<"Value at index 2 : "<< vec[2]<<" or "<< vec.at(2)<< endl;
    cout<<"front " << vec.front() << endl;
    cout<<"back " << vec.back() << endl;
    cout<< vec.capacity()<<endl;    
   // cout<<vec.size()<<endl;

    return 0;
}
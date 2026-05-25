#include<iostream>
#include<vector>
using namespace std;
int main(){

  vector<int> v;

  cout<<"Size of Vector: "<<v.size()<<endl;
  cout<<"Capacity of Vector: "<<v.capacity()<<endl;


  v.push_back(1); // Adding an element to a vector.
  cout<<"Size of Vector: "<<v.size()<<endl;
  cout<<"Capacity of Vector: "<<v.capacity()<<endl;

  v.push_back(2); // Adding an element to a vector.
  cout<<"Size of Vector: "<<v.size()<<endl;
  cout<<"Capacity of Vector: "<<v.capacity()<<endl;

  v.push_back(3); // Adding an element to a vector.
  cout<<"Size of Vector: "<<v.size()<<endl;
  cout<<"Capacity of Vector: "<<v.capacity()<<endl;

  v.resize(5);
  cout<<"Size of Vector: "<<v.size()<<endl;
  cout<<"Capacity of Vector: "<<v.capacity()<<endl;

  v.resize(10);
  cout<<"Size of Vector: "<<v.size()<<endl;
  cout<<"Capacity of Vector: "<<v.capacity()<<endl;

  v.pop_back(); // Removing Elements
  v.pop_back();
  cout<<"Size of Vector: "<<v.size()<<endl;
  cout<<"Capacity of Vector: "<<v.capacity()<<endl;

  return 0;
}
#include<iostream>
using namespace std;
int main(){

  int x = 18;
  float y = 7.9;
  
  int *ptr = &x;
  cout<<"Address stores inside the ptr: "<<ptr<<endl;
  cout<<"Value present at the address stored in the ptr: "<<*ptr<<endl; // *ptr it is a dereference operator that is used to print the value stored on its address.
  
  float *ptrf = &y;
  cout<<"Address stores inside the ptr: "<<ptrf<<endl;
  cout<<"Value present at the address stored in the ptr: "<<*ptrf<<endl;

  // ----------------

  x = 23; // bucket x updated the value from 18 --> 23
  // but ptr is still pointing to the same bucket 
  // now if we derefernce ptr, we will get 23

  cout<<"New updated value of x"<<x<<endl;
  cout<<"ptr is still pointing to same memory which has 23 instead of 18: "<<*ptr<<endl;

  // updating x with pointer 
  *ptr = 50;
  cout<<"New value of x: "<<x<<endl;
  cout<<"New value pointed by ptr: "<<*ptr<<endl;

  int valueAtX = *ptr; 
  cout<<valueAtX<<endl;
  
  return 0;
}
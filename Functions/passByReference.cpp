#include<iostream>
using namespace std;
int main(){
  int p = 9;
  int &q = p; // &(Ampercent) allocating a same value to another variable using a variable.

  q++;
  cout<<p<<endl;
  
  cout<<&p<<endl; // Here '&' is used for getting the address of value stored in the variable.
  cout<<&q<<endl;

  return 0;
}
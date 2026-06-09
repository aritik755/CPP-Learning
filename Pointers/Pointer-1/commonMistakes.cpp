#include<iostream>
using namespace std;
int main(){

  int x = 20;
  int y = 2;
  int *ptr = &x;

  // ptr = 5; ptr stores only address nothing else

  // *ptr = &y; this wont workk as we cannot store address in an int bucket.

  cout<<"Address of x: "<<&x<<endl;
  cout<<"Address stored inside ptr: "<<ptr<<endl;
  cout<<"Address of ptr itself: "<<&ptr<<endl; // prints the address of the ptr bucket not the address stored in ptr.

  return 0;
}
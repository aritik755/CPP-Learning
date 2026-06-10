#include<iostream>
using namespace std;
int main(){
  // If we want to just declare a pointer variable and get the address later to store we can use NULL Pointer.
  // It cannot be derefernced (*ptr) it will give segmentation fault.

  int *ptr = NULL;
  int *p1 = 0;
  int *p2 = '\0'; // 0 is a special reserved memory address.
  cout<<ptr<<" "<<p1<<" "<<p2<<endl;

  return 0;
}
#include<iostream>
using namespace std;
int main(){
  // Wild Pointer is a pointer in which pointer is declared but no intialized due to which the it has random memory allocation.

  int *ptr; // only declared
  cout<<ptr<<" "<<*ptr<<endl;

  return 0;
}
#include<iostream>
using namespace std;
int main(){

  int x = 20;
  float y = 7.9;

  // Pointer are used to store the addresess of variables in the program.
  
  // Creating a pointer that is used to store address of a int data type.
  int *ptr1 = &x; // data_type *pointer_name
  cout<<ptr1<<endl;

  // Creating a pointer that is used to store address of a float data type.
  float *ptr2 = &y;
  cout<<ptr2<<endl;
  
  return 0;
}
#include<iostream>
using namespace std;
int main(){
  // Void Pointer is a special pointer that can point to any datatype value.
  // It is also called generic pointer.
  // It cannot be directly dereferenced.
  // It can be dereferenced using typecasting. 

  float f = 10.2;
  int x = 10;
  void *ptr = &f;
  ptr = &x;

  int *integerPointer = (int *)ptr; // Typecasting

  cout<<*integerPointer<<endl;

  return 0;
}
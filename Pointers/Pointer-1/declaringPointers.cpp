#include<iostream>
using namespace std;
int main(){

  int *ptr; // only declaring the pointer.
  cout<<ptr<<endl; // random address

  int marks = 90;

  ptr = &marks; // re-assignment / update
  cout<<ptr<<endl; // marks address

  return 0;
}
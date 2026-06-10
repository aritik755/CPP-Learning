#include<iostream>
using namespace std;
int main(){

  int x = 12;
  int *ptr = &x;

  cout<<ptr<<endl;

  // ptr = ptr + 1;
  ptr += 1;

  cout<<ptr<<endl;

  return 0;
}
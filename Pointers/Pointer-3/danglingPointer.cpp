#include<iostream>
using namespace std;
int main(){
  // Dangling Pointer is a type of pointer that points in a memory location which is not valid. 

  int *ptr = NULL;
  {
    int x = 22;
    ptr = &x;

  }

  cout<<ptr<<endl;

  return 0;
}
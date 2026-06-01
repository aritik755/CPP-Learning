#include<iostream>
using namespace std;
int main(){

  int r;
  cout<<"Enter the value of r: ";
  cin>>r;

  int factorial = 1;
  int i = 1;
  cout<<"Factorial of given input: ";
  while(i <= r){
  factorial *= i;
  i++;
  }
  cout<<factorial<<endl;

  return 0;
}
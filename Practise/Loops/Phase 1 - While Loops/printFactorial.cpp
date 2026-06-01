#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the value of n: ";
  cin>>n;

  int factorial = 1;
  int i = 1;
  cout<<"Factorial of given input: ";
  while(i <= n){
  factorial *= i;
  i++;
  }
  cout<<factorial<<endl;

  return 0;
}
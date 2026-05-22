#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a Number:"<<endl;
  cin>>n;

  int factorial = 1;
  for(int i = 1; i<=n; i++){
    factorial = factorial*i; // factorail*=i
  }
  
  cout<<"The factorial of the given number: "<<factorial<<endl;
  return 0;
}
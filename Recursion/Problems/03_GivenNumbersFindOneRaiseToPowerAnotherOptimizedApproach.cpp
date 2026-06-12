#include<iostream>
using namespace std;

int power(int num1, int num2){
  if(num2 == 0) return 1;
  if(num2 % 2 == 0){
    int result = power(num1 , num2/2);
    return result*result;
  }
  else{
    int result = power(num1 , (num2-1)/2);
    return num1*result*result;
  }
}

int main(){

  int p,q;
  cout<<"Enter the base and power for computation: ";
  cin>>p>>q;

  cout<<"The computed result is: "<<power(p,q)<<endl;

  return 0;
}
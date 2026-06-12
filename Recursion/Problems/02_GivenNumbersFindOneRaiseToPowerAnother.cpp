#include<iostream>
using namespace std;

int power(int num1, int num2){
  if(num2 == 0) return 1;
  return num1*power(num1,num2-1); 
}

int main(){

  int p,q;
  cout<<"Enter the base and power for computation: ";
  cin>>p>>q;

  cout<<"The computed result is: "<<power(p,q)<<endl;

  return 0;
}
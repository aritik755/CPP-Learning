#include<iostream>
using namespace std;
int main(){

  int digit;
  cout<<"Enter a number: ";
  cin>>digit;

  int originalDigit = digit;

  int reversedDigit = 0;
  while(digit > 0){
    int lastDigit = digit % 10;
    reversedDigit = reversedDigit*10 + lastDigit;
    digit /= 10;
  }
  cout<<reversedDigit<<endl;
  
  if(originalDigit == reversedDigit){
    cout<<"The given number is Palindrome."<<endl;
  }
  else{
    cout<<"The given number is not Palindrome."<<endl;
  }

  return 0;
}
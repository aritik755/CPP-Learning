#include<iostream>
using namespace std;
int main(){

  int digit;
  cout<<"Enter the digit: ";
  cin>>digit;

  cout<<"The Reverse of given digit: ";
  while(digit > 0){
    int lastDigit = digit % 10;
    cout<<lastDigit<<"";
    digit /= 10;
  }

  return 0;
}
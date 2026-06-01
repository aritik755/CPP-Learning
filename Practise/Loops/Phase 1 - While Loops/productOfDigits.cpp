#include<iostream>
using namespace std;
int main(){

  int digit;
  cout<<"Enter the digit: ";
  cin>>digit;

  int multiplication = 1;
  while(digit > 0){
    int lastdigit = digit % 10;
    multiplication *= lastdigit; 
    digit /= 10;
  }
  cout<<"Product of Digits of the given input : "<<multiplication<<endl;

  return 0;
}
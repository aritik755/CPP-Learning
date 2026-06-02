#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter a number: ";
  cin>>n;

  int largestDigit = 0;
  
  while(n > 0){
  int digit = n % 10;
  
  if(largestDigit < digit){
    largestDigit = digit;
  }
  n /= 10;
  }
  cout<<"Largest Digit: "<<largestDigit<<endl;

  return 0;
}
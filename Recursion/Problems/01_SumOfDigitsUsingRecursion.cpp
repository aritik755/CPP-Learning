#include<iostream>
using namespace std;

int sumOfDigits(int n){
  if(n >= 0 && n <= 9) return n;
  return sumOfDigits(n/10) + (n % 10);
}

int main(){

  int n;
  cout<<"Enter a Number: ";
  cin>>n;

  int result = sumOfDigits(n);
  cout<<"Sum of digits of the given number is: "<<result<<endl;

  return 0;
}
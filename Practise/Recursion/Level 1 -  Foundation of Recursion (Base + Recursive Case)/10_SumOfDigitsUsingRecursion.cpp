// 10. Find sum of digits of a number recursively.
#include<iostream>
using namespace std;

int sumOfDigits(int n){

  if(n == 0) return 0;

  int lastDigit = n % 10;
  n = n/10;

  return lastDigit + sumOfDigits(n);
}

int main(){

  int n;
  cout<<"Enter the number: ";
  cin>>n;

  cout<<"Sum of digits of the "<<n<<" is: "<<sumOfDigits(n)<<endl;

  return 0;
}
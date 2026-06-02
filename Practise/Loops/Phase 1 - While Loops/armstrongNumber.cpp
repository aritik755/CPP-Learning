#include<iostream>
#include<cmath>
using namespace std;
int main(){

  int n;
  cout<<"Enter a Number: ";
  cin>>n;

  int count = 0;
  while(n > 0){
    count++;
    n /= 10;
  }
  
  int originalNumber = n;

  int sum = 0;
  while(n > 0){
    int digit = n % 10;
    int powerNumberOfDigits = pow(digit, count);
    sum += powerNumberOfDigits;
    n /= 10; 
  }

  if(sum == originalNumber){
    cout<<"The given number is a armstrong number."<<endl;
  }
  else{
    cout<<"The given number is not a armstrong number."<<endl;
  }

  return 0;
}
#include<iostream>
#include<cmath>
using namespace std;
int main(){

  int n;
  cout<<"Enter a number: ";
  cin>>n;

  int originalNumber = n;
  
  int count = 0;
  int temp = n;
  do{
    count++;
    temp /= 10;
  }while(temp > 0);

  int sum = 0;
  do{
    int digit = n % 10;
    double lastDigit = pow(digit , count);
    sum += lastDigit;
    n /= 10; 
  }while(n > 0);

  if(sum == originalNumber){
    cout<<"The given number is a armstrong number.";
  }
  else{
    cout<<"The given number is not a armstrong number.";
  }

  return 0;
}
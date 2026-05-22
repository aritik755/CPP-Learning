#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a Number: ";
  cin>>n;

  int sum = 0;
  while(n>0){
    int lastDigit = n%10;
    sum += lastDigit;
    n/=10;
  }
  cout<<"Sum of Digits of the given number: "<<sum<<endl;
  return 0;
}
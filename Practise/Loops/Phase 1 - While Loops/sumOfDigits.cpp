#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter a number : ";
  cin>>n;

  int sum = 0;
  while(n > 0){
    int digit = n % 10;
    sum += digit;
    n /= 10; 
  }
  cout<<"The Sum of Digits of the given number: "<<sum<<endl;

  return 0;
}
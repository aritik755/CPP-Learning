#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter a number: ";
  cin>>n;

  int sum = 0;
  do{
    int lastDigit = n % 10;
    sum += lastDigit;
    n /= 10;
  }while(n > 0);

  cout<<"Sum of Digits of the given number: "<<sum<<endl;

  return 0;
}
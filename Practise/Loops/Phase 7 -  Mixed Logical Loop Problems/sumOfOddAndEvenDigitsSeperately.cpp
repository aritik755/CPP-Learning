#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number: ";
  cin>>n;

  int sumEven = 0;
  int sumOdd = 0;
  while(n>0){
    int lastDigit = n % 10;
    if(lastDigit % 2 == 0){
      sumEven += lastDigit;
    }
    if(lastDigit % 2 != 0){
      sumOdd += lastDigit;
    }
    n /= 10;
  }

  cout<<"Sum of even digits of the given number: "<<sumEven<<endl;
  cout<<"Sum of odd digits of the given number: "<<sumOdd<<endl;

  return 0;
}
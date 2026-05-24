#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a Decimal Number: ";
  cin>>n;

  int result = 0;
  int power = 1;
  while(n>0){
    int parityDigit = n%2;
    result += parityDigit*power;
    power *= 10;
    n/=2;
  } 

  cout<<"Binary Number of given Decimal Number: "<<result<<endl;
  return 0;
}
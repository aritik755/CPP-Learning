#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a Binary Number: ";
  cin>>n;

  int result = 0;
  int power = 1;
  while(n>0){
    int lastDigit = n%10;
    result += lastDigit*power;
    power *= 2;
    n/=10;
  }
  cout<<"Decimal Number of given Binary Number: "<<result<<endl;
  return 0;
}
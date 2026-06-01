#include<iostream>
using namespace std;
int main(){

  int digit;
  cout<<"Enter the number: ";
  cin>>digit;

  int count = 0;
  while(digit > 0){
    int lastdigit = digit % 10;
    digit /= 10;
    count++;
  }
  cout<<"Number of Digits : "<<count<<endl;

  return 0;
}

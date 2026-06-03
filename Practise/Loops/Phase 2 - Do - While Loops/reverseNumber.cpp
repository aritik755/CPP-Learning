#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter a number: ";
  cin>>n;

  cout<<"The reverse number of the given number: ";
  do{
    int lastDigit = n % 10;
    cout<<lastDigit;
    n /= 10;
  }while(n > 0);
  
  return 0;
}
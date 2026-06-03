#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter a number: ";
  cin>>n;

  int count = 0;
  do{
    int digit = n % 10;
    count++;
    n /= 10;
  }while(n > 0);

  cout<<"Number of Digits in the given number: "<<count<<endl;
  
  return 0;
}
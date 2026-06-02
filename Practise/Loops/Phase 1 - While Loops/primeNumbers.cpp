#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter a number: ";
  cin>>n;

  cout<<"The prime numbers between 1 to given imput is: ";
  int num = 2;
  while(num <= n){
    int count = 0;
    int i = 1;

    while(i <= num){
      if(num % i == 0){
        count++;
      }
      i++;
    }
    if(count == 2){
      cout<<num<<"\n";
    }
    num++;
  }

  return 0;
}
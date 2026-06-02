#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter a number: ";
  cin>>n;

  int sum = 0;
  int i = 1;
  while(i <= n/2){
    if(n % i == 0){
      sum += i;
    }
    i++;
  } 

  if(sum == n){
    cout<<"It is Perfect Number.";
  }
  else{
    cout<<"It is not a Perfect Number.";
  }

  return 0;
}
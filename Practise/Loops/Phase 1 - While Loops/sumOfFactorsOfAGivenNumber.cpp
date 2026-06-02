#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter a Number:";
  cin>>n;

  int i = 1;
  int sum = 0;
  while(i <= n){
    if(n % i == 0){
      sum += i;
    }
    i++;
  }
    
  cout<<"Sum of Factors of the given number are: "<<sum<<endl;

  return 0;
}
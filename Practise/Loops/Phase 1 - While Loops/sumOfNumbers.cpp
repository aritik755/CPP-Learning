#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the value of n: ";
  cin>>n;

  int sum = 0;
  int i = 1;
  cout<<"Sum of the numbers till n: ";
  while(i <= n){
  sum += i; 
  i++;
  }
  cout<<sum<<endl;

  return 0;
}
#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the value of n: ";
  cin>>n;

  int sum = 0;
  int i = 1;
  cout<<"Sum of Even Numbers between 1 to n : ";
  while(i <= n){
    if(i % 2 != 0){
      sum += i; 
    }
  i++;
  }
  cout<<sum<<endl;

  return 0;
}
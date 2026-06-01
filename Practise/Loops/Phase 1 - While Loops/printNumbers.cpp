#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the value of n: ";
  cin>>n;

  int i = 1;
  cout<<"Numbers till given input: ";
  while(i <= n){
    cout<<i<<" ";
    i++;
  }
  cout<<endl;

  return 0;
}
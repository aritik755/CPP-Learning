#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the value of n: ";
  cin>>n;

  int i = n;
  cout<<"Reverse Numbers from given input: ";
  while(i > 0){
    cout<<i<<"\n";
    i--;
  }

  return 0;
}
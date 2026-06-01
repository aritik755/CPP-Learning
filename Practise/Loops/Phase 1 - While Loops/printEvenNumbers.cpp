#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the value of n: ";
  cin>>n;

  int i = 1;
  cout<<"Even Numbers between the given input: ";
  while(i <= n){
    if(i % 2 == 0){
      cout<<i<<"\n";
    }
  i++;
  }
  cout<<endl;

  return 0;
}
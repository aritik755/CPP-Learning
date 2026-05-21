#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a Number:";
  cin>>n;

  int sum = 0;
  int i = 1;  // Loop Variable
  while(i<=n){ // Condition
    sum += i;
    i++; // Updating Loop Variable
  }
  
  cout<<sum<<endl;

  return 0;
}
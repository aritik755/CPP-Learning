#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;

  cout<<"Pattern: "<<endl;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i*i; j++){
      cout<<"*"<<" ";
    }
    cout<<endl;
  }

  return 0;
}
#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;

  for(int i = 2; i <= n*2; i += 2){
    for(int j = 0; j < i; j++){
      cout<<"*"<<" ";
    }
    cout<<endl;
  }

  return 0;
}
#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;

  for(int i = 1; i <= n; i++){
    char alphabet = 'A' + (i-1);
    for(int j = 1; j <= i; j++){
      cout<<alphabet<<" ";
    }
    cout<<endl;
  }

  return 0;
}
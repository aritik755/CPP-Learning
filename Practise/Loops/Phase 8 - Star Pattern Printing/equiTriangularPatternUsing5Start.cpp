#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;

  for(int i = 1; i <= n; i++){
    for(int j = i; j < n; j++){
      cout<<" ";
    }
    for(int j = 5; j > 5-i; j--){
      cout<<j;
    }
    for(int j = 5-i+2; j <= 5; j++){
      cout<<j;
    }
    cout<<endl;
  }

  return 0;
}
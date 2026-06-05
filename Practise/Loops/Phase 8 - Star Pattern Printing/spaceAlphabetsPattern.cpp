#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  char alphabet = 'A';
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= (n-i); j++){
      cout<<" ";
    }
    for(int j = 1; j <= (2*i-1); j++){
      cout<<alphabet++;
    }
    cout<<endl;
  }

  return 0;
}
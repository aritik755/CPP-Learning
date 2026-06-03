#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  cout<<"Square series upto given input: "<<"\n";
  for(int i = 1; i <= n; i++){
    int square = i*i;
    cout<<square<<"\n";
  }
  return 0;
}
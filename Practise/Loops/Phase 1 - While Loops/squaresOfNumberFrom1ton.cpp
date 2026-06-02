#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  int i = 1;
  cout<<"The square of numbers from 1 to given input:"<<"\n";
  while(i <= n){
    int squareOfNumber = i*i;
    cout<<squareOfNumber<<"\n";
    i++;
  }

  return 0;
}
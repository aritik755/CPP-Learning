#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  int i = 1;
  cout<<"The cube of numbers from 1 to given input:"<<"\n";
  while(i <= n){
    int cubeOfNumber = i*i*i;
    cout<<cubeOfNumber<<"\n";
    i++;
  }

  return 0;
}
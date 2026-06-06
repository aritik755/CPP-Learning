// 1. Input n and take n integers into an array; print them.
#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the size of array: ";
  cin>>n;

  int array[n];

  cout<<"Enter the elements of array: "<<endl;
  for(int i = 0; i < n; i++){
    cin>>array[i];
  }

  cout<<"Elements of array: "<<endl;
  for(int i = 0; i < n; i++){
    cout<<array[i]<<" ";
  }

  return 0;
}
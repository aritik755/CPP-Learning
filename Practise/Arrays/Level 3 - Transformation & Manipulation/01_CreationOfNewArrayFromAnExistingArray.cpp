// 1. Create a new array containing squares of all numbers.
#include<iostream>
using namespace std;
int main(){
  
  int n;
  cout<<"Enter the Size of Array: ";
  cin>>n;

  int array1[n];

  cout<<"Enter the elements of array: ";
  for(int i = 0; i < n; i++){
    cin>>array1[i];
  }

  int array2[n];

  cout<<"Squared Elements Array: "<<endl;
  for(int i = 0; i < n; i++){
    array2[i] = array1[i]*array1[i];
    cout<<array2[i]<<endl;
  }

  return 0;
}
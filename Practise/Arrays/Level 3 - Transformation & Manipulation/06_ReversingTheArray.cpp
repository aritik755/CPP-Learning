// 6. Reverse an array (without using built-in reverse).
#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the size of array: ";
  cin>>n;

  int array[n];
  int reversedArray[n];

  cout<<"Enter the Elements of the Array: "<<endl;
  for(int i = 0; i < n; i++){
    cin>>array[i];
  }

  for(int i = 0; i < n; i++){
    reversedArray[i] = array[n-1-i];
  }

  cout<<"Reversed Array: "<<endl;
  for(int i = 0; i < n; i++){
    cout<<reversedArray[i]<<endl;
  }

  return 0;
}
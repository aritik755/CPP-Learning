// 1. Input an element x — check if it exists in the array.
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

  int x;
  cout<<"Enter the target element(x): "<<endl;
  cin>>x;

  for(int i = 0; i < n; i++){
    if(array[i] == x){
      cout<<"Target element "<<array[i]<<" found in the Array."<<endl;
      break;
    }
    if(i == n-1) {
    cout << "Target Element Not Found.";
    }
  }
  
  return 0;
}
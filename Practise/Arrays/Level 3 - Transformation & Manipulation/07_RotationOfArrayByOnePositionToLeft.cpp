// 7. Rotate an array by one position to the left.
#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the size of array: ";
  cin>>n;

  int array[n];

  cout<<"Enter the Elements of the Array: "<<endl;
  for(int i = 0; i < n; i++){
    cin>>array[i];
  }

  int temp = array[0];
  for(int i = 0; i < n-1; i++){
    array[i] = array[i+1]; 
  }
  array[n-1] = temp;

  cout<<"Shifted Array: "<<endl;
  for(int i = 0; i < n; i++){
    cout<<array[i]<<" ";
  }


  return 0;
}
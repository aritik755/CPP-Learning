// 8. Rotate an array by one position to the right.
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

  int temp = array[n-1];
  for(int i = n-1; i > 0; i--){
    array[i] = array[i-1]; 
  }
  array[0] = temp;

  cout<<"Shifted Array: "<<endl;
  for(int i = 0; i < n; i++){
    cout<<array[i]<<" ";
  }


  return 0;
}
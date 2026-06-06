// 5. Swap the first and last elements of the array.
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
  array[0] = array[n-1];
  array[n-1] = temp; 

  cout<<"Swaped Array: "<<endl;
  for(int i = 0; i < n; i++){
    cout<<array[i]<<endl;
  }



  return 0;
}
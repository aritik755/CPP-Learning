// 5. Find the minimum element in an array.
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

  int minElement = array[0];
  for(int i = 0; i < n; i++){
    if(minElement > array[i])
    minElement = array[i];
  }

  cout<<"Minimum Element of the array: "<<minElement<<endl;

  return 0;
}
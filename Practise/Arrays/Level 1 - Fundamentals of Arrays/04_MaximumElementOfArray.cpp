// 4. Find the maximum element in an array.
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

  int maxElement = 0;
  for(int i = 0; i < n; i++){
    if(array[i] > maxElement)
    maxElement = array[i];
  }

  cout<<"Maximum Element of the array: "<<maxElement<<endl;

  return 0;
}
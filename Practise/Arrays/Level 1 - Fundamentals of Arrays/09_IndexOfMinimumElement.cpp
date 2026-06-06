// 9. Find the index of the minimum element.
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
  int indexOfMinElement = 0;
  for(int i = 0; i < n; i++){
    if(minElement > array[i]){
    minElement = array[i];
    indexOfMinElement = i;
    }
  }

  cout<<"Index of Minimum Element of the array: "<<indexOfMinElement<<endl;

  return 0;
}
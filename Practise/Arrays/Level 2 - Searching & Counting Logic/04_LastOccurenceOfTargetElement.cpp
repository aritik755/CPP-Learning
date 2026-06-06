// 4. Find the last occurrence of a given number.
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

  int indexOfTargetElement = -1;
  for(int i = n-1; i >= 0; i--){
    if(array[i] == x){
      indexOfTargetElement = i;
      break;
    }
  }
  
  cout<<"The last occurence of target element is at index: "<<indexOfTargetElement<<endl; 
  return 0;
}
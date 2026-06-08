// 1. Check if the array is sorted in ascending order.
#include<iostream>
using namespace std;
int main(){

  int array[] = {10, 20, 30, 45, 50};
  int n = sizeof(array)/sizeof(array[0]);

  bool arranged = true;
  for(int i = 0; i < n-1; i++){
    if(array[i] > array[i+1]){
      arranged = false;
      break;
    }
  }

  if(arranged){
    cout<<"Array is arranged in ascending order.";
  }
  else{
    cout<<"Array is not arranged in the ascending order.";
  }

  return 0;
}
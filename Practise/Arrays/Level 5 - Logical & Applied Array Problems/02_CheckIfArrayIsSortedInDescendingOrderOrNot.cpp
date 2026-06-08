// 1. Check if the array is sorted in descendi order.
#include<iostream>
using namespace std;
int main(){

  int array[] = {50,40,30,20,10};
  int n = sizeof(array)/sizeof(array[0]);

  bool arranged = true;
  for(int i = 0; i < n-1; i++){
    if(array[i] < array[i+1]){
      arranged = false;
      break;
    }
  }

  if(arranged){
    cout<<"Array is arranged in descending order.";
  }
  else{
    cout<<"Array is not arranged in the descending order.";
  }

  return 0;
}
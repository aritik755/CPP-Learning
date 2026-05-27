#include<iostream>
using namespace std;

// int largestElementIndex(int array[], int size){ // This function will return largest element index of an array.
//   int max = INT16_MIN; // INT16_MIN used to find the smallest number.
//   int maxIndex=-1;
//   for(int i = 0; i<size; i++){
//     if(array[i]>max){
//       max = array[i];
//       maxIndex = i;
//     }
//   }
//   return maxIndex;
// }

int secondLargestElement(int array[], int size){
  int max = INT16_MIN;
  int second_max = INT16_MIN;

  for(int i = 0; i<size; i++){
    if(array[i] > max){
      max = array[i];
    }
  }

  for(int i = 0; i < size; i++){
    if(array[i]>second_max && array[i] != max){
      second_max=array[i];
    }
  }
  return second_max;
}

int main(){

  int array[] = {2,3,5,7,6,1,7};
  int n = 7;

  // int indexOfLargest = largestElementIndex(array , n);
  // cout<<"Largest Element in the Array: "<<array[indexOfLargest]<<endl;

  // // array[indexOfLargest] = -1;

  // int largestElement = array[indexOfLargest];
  // for(int i = 0; i < n; i++){
  //   if(array[i]==largestElement){
  //     array[i] = -1;
  //   }
  // }

  // int indexOfSecondLargest = largestElementIndex(array,n);
  // cout<<"Second Largest Element in the Array: "<<array[indexOfSecondLargest]<<endl;
  
  cout<<"Second Largest Element present in the Array: "<<secondLargestElement(array, n)<<endl;
  return 0;
}
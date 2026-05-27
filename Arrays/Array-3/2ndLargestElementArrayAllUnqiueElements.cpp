#include<iostream>
using namespace std;

int largestElementIndex(int array[], int size){ // This function will return largest element index of an array.
  int max = INT16_MIN; // INT16_MIN used to find the smallest number.
  int maxIndex=-1;
  for(int i = 0; i<size; i++){
    if(array[i]>max){
      max = array[i];
      maxIndex = i;
    }
  }
  return maxIndex;
}

int main(){

  int array[] = {1,33,234,567,453};

  int indexOfLargest = largestElementIndex(array , 5);
  cout<<"Largest Element in the Array: "<<array[indexOfLargest]<<endl;

  array[indexOfLargest] = -1;
  int indexOfSecondLargest = largestElementIndex(array , 5);

  cout<<"Second Largest Element in the Array: "<<array[indexOfSecondLargest]<<endl;
  
  return 0;
}
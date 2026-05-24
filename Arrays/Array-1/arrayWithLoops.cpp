#include<iostream>
using namespace std;
int main(){
  
  int array[] = {1,2,3,4,5};

  // cout<<sizeof(array)/sizeof(array[0])<<endl;
  
  int lengthOfArray = sizeof(array)/sizeof(array[0]);
  
  // for loop
  for(int idx = 0; idx < lengthOfArray; idx++ ){
    cout<<array[idx]<<endl;
  } // Here 'idx' is basically a index.

  // for each loop
  for(int element:array){
    cout<<element<<endl;
  }

  // while loop
  int index = 0;
  while(index<lengthOfArray){
  cout<<array[index]<<endl;
  index++;
  }
    
  return 0;
}
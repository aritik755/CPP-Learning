// 5. Find the difference between the largest and smallest element.
#include<iostream>
using namespace std;
int main(){

  int array[] = {40,20,30,180,910,1000};
  int n = sizeof(array) / sizeof(array[0]);

  int smallestElement = array[0];
  int maxElement = array[0];
  for(int i = 1; i < n; i++){
    if(array[i] > maxElement){
      maxElement = array[i];
    }
    if(array[i] < smallestElement){
      smallestElement = array[i];
    }
  }

  cout<<"Differnce Between Largest and Smallest Element is: "<<maxElement-smallestElement<<endl;

  return 0;
}
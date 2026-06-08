// 6. Find the sum of all elements except the largest and smallest.
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

  int sum = 0;
  for(int i = 0; i < n; i++){
    sum += array[i];
  }
  
  int ans = sum - maxElement - smallestElement;

  cout<<"Sum of all elements expect largest and smallest element of array: "<<ans<<endl;

  return 0;
}
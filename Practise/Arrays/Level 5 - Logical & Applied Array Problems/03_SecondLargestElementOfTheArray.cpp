// 3. Find the second largest element in an array.
#include<iostream>
using namespace std;
int main(){

  int array[] = {20,40,50,80,90,100};
  int n = sizeof(array) / sizeof(array[0]);

  int largestElement = array[0];
  int secondLargestElement = array[0];

  for(int i = 1; i < n; i++){
    if(array[i] > largestElement){
      secondLargestElement = largestElement;
      largestElement = array[i];
    }
    else if(array[i] > secondLargestElement){
      secondLargestElement = array[i];
    }
  }

  cout << "Second Largest Element: " << secondLargestElement;

  return 0;
}
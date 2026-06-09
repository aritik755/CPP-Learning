// 8. Count how many elements are greater than the average of the array.
#include<iostream>
using namespace std;
int main(){

  int array[] = {10,22,54,45,65,98,78,56,40,100};
  int n = sizeof(array)/sizeof(array[0]);

  int sum = 0;
  for(int i = 0; i < n; i++){
    sum += array[i];
  }

  int avg = sum/n;

  int count = 0;
  cout<<"Elements greater than average of array: "<<endl;
  for(int i = 0; i < n; i++){
    if(array[i] > avg){
      cout<<array[i]<<" "<<endl;
      count++;
    }
  }

  cout<<"Number of elements greater than average of array: "<<count<<endl;

  return 0;
}
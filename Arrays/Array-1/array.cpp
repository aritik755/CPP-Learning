#include<iostream>
using namespace std;
int main(){
  
  int array[] = {1,2,3,4,5}; // Initializing of Array.
  
  cout<<sizeof(array)<<endl; // Size of an Array.
  
  cout<<sizeof(array)/sizeof(array[0])<<endl; // Length of an Array.
  
  return 0;
}
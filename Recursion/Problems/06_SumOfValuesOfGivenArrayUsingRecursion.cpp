#include<iostream>
#include<algorithm>
using namespace std;

int f(int *arr, int idx, int n){

  if(idx == n-1){
    return arr[idx];
  }
 
  return arr[idx] + f(arr, idx + 1, n);
}

int main(){

  int n = 5; 
  int arr[] = {12,34,45,56,67};
  cout<<f(arr, 0, n)<<endl;

  return 0;
}
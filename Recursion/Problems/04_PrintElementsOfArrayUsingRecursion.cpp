#include<iostream>
using namespace std;

void f(int *arr, int idx, int n){

  if(idx == n) return;

  cout<<arr[idx]<<endl;

  f(arr, idx + 1, n);

}

int main(){

  int n = 6;
  int arr[] = {9,6,5,4,2,1};
  f(arr,0,n);

  return 0;
}
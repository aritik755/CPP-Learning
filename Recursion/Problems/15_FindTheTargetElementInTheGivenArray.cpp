#include<iostream>
using namespace std;
bool f(int *arr, int n, int i, int x){
  if(i == n) return false;
  return (arr[i] == x) || f(arr, n, i+1, x);
}
int main(){

  int arr[] = {1,4,6,8,9,3,4,5,74,67};
  int n = 10;
  int x = 74;
  bool result = f(arr, n, 0, x);
  if(result) cout<<"Target element is present in the array.";
  else cout<<"Target Element is not present in the array.";

  return 0;
}
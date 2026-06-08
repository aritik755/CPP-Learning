// 7. Find element-wise sum of two arrays (A[i] + B[i]).
#include<iostream>
using namespace std;
int main(){

  int array1[] = {10,20,30,40,50};
  int array2[] = {1,2,3,4,5};
  int n = 5;
  int sum[n];

  cout<<"Element wise sum of arrays: "<<endl;
  for(int i = 0; i < n; i++){
    sum[i] = array1[i] + array2[i];
    cout<<sum[i]<<" ";
  }

  return 0;
}
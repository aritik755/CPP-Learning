// 8. Find element-wise product of two arrays.
#include<iostream>
using namespace std;
int main(){

  int array1[] = {10,20,30,40,50};
  int array2[] = {1,2,3,4,5};
  int n = 5;

  cout<<"Element wise product of arrays: "<<endl;
  for(int i = 0; i < n; i++){
    cout<<array1[i]*array2[i]<<" ";
  }

  return 0;
}
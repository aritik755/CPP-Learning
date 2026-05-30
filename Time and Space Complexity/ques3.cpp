#include<iostream>
using namespace std;
int main(){

  int array1[] = {1,2,3,4,5,6,7,8,9};
  int n = 9;

  int array2[] = {1,2,4,12,7,11,0,9};
  int m = 8;

  int sum1 = 0;
  int sum2 = 0;

  for(int i = 0; i < n; i++){
    sum1 += array1[i]; 
  }

  for(int i = 0; i < m; i++){
    sum2 += array2[i]; 
  }

  // O(n+m) is the time complexity.

  cout<<"Sum of Array1 and Array2: "<<sum1<<" "<<sum2<<endl;
  return 0;
}
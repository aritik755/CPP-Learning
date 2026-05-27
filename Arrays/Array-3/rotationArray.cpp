#include<iostream>
using namespace std;
int main(){

  int array[] = {1,2,3,4,5};

  int k = 2;

  int n = 5;
  
  // k can be greater than n 
  k = k%n;

  int ansArray[5];
  int j = 0;

  // Inserting last k elements in ansArray
  for(int i = n-k; i < n; i++){
    ansArray[j++] = array[i]; 
  }

  // Inserting first n-k elements in ansArray
  for(int i = 0; i <= k; i++){
    ansArray[j++] = array[i];
  }

  for(int i = 0; i < n; i++){
    cout<<ansArray[i]<<" ";
  }
  cout<<endl;

  return 0;
}
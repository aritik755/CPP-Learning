// 2. Compare two arrays — check if they contain the same elements (ignore order).
#include<iostream>
using namespace std;
int main(){

  int array1[] = {3,5,7,9,8};
  int array2[] = {3,7,5,9,8};
  int n = 5;

  bool visited[n];
  for (int i = 0; i < n; i++) {
    visited[i] = false;
  }
  
  int count = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(array1[i] == array2[j]){
        count++;
        visited[j] = true; 
        break;
      }
    }
  }

  if(count == n){
    cout<<"Arrays Elements are equal."<<endl;
  }
  else{
    cout<<"Arrays elements are not equal."<<endl;
  }
  return 0;
}
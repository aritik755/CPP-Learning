// 6. Count how many elements are common between two arrays.
#include<iostream>
using namespace std;
int main(){

  int array1[] = {10,20,30,40,50};
  int array2[] = {20,25,30,35,50};
  int n = 5;

  bool visited[n];
  for (int i = 0; i < n; i++){
    visited[i] = false;
  }

  int count = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(array1[i] == array2[j] && !visited[j]){
        count++;
        visited[j] = true;
        break;
      }
    }
  }

  cout<<"Number of Common Elements in both arrays: "<<count<<endl;
  return 0;
}
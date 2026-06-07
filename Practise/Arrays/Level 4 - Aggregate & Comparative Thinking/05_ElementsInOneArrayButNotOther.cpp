// 5. Find elements that are in one array but not in the other.
#include<iostream>
using namespace std;
int main(){

  int array1[] = {10,20,30,40,50};
  int array2[] = {20,25,30,35,50};
  int n = 5;

  cout<<"Elements present in array1 but not in array 2: ";
  for(int i = 0; i < n; i++){
    bool found = false;
    for(int j = 0; j < n; j++){
      if(array1[i] == array2[j]){
        found = true;
      }
    }
    if(!found){
      cout<<array1[i]<<" ";
    }
  }
   cout<<endl;

  cout<<"Elements present in array2 but not in array 1: ";
  for(int i = 0; i < n; i++){
    bool found = false;
    for(int j = 0; j < n; j++){
      if(array2[i] == array1[j]){
        found = true;
      }
    }
    if(!found){
      cout<<array2[i]<<" ";
    }
  }
  cout<<endl;

  return 0;
}
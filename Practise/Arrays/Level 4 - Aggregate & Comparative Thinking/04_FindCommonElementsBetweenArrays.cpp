// 4. Find the common elements between two arrays.
#include<iostream>
using namespace std;
int main(){

  int array1[] = {10,20,30,40,50};
  int array2[] = {20,25,30,35,50};
  int n = 5;

  cout<<"Common Elements between the arrays: "<<endl;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(array1[i] == array2[j]){
        cout<<array1[i]<<" ";
      }
    }
  }
  return 0;
}
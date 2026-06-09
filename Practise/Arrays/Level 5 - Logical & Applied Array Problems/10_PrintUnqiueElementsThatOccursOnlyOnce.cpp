// 10. Print all unique elements (those that occur exactly once).
#include<iostream>
using namespace std;
int main(){

  int array[] = {10,20,10,30,40,50,20,40,10,60};
  int n = sizeof(array)/sizeof(array[0]);

  cout<<"Unique Elements: "<<endl;
  for(int i = 0; i < n; i++){
    int count = 0;
    for(int j = 0; j < n; j++){
      if(array[i] == array[j]){
        count++;
      }
    }

    if(count == 1){
      cout<<array[i]<<" ";
    }
  }

  return 0;
}
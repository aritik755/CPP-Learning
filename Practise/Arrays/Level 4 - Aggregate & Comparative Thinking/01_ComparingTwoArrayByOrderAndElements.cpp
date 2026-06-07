// 1. Compare two arrays — check if they are equal (same elements & order).
#include<iostream>
using namespace std;
int main(){

  int array1[] = {3,5,7,9,8};
  int array2[] = {3,5,7,9,8};

  bool equal = true;
  for(int i = 0; i < 5; i++){
    if(array1[i] != array2[i]){
      equal = false;
      break;
    }
  }

  if(equal){
    cout<<"Arrays are equal."<<endl;
  }
  else{
    cout<<"Arrays are not equal."<<endl;
  }
  return 0;
}
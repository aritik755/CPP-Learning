#include<iostream>
using namespace std;
int main(){
   
  int array[] = {15,44,49,234,783,1002};

  int key = 49;

  int ans = -1;

  for(int i = 0; i < 6; i++){
    if(key == array[i]){
      ans = i;
      break;
    }
  }
  cout<<"Element is matched in the array:"<<ans<<endl; // Ans will be the indexing.
  return 0;
}
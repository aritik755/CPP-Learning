#include<iostream>
using namespace std;
int main(){
  
  int array[] = {1,2,3,4,5,6};

  bool sortedFlag = true;
  for(int i = 1; i < 6; i++){
    if(array[i] <= array[i-1]){
      sortedFlag=false;  
    }
  }
  cout<<"Array is sorted(True(1)/False(0)): "<<sortedFlag<<endl;
  return 0;
}  
#include<iostream>
using namespace std;
int main(){
  
  int array[] = {1,2,1,2,1,2};

  int ansSum = 0;
  for(int i = 0; i < 6; i++){
    if(i%2 == 0){
      ansSum += array[i];
    }
    else{
      ansSum -= array[i];
    }
  }
  cout<<"Final Output: "<<ansSum<<endl; // Sum of values at even places - Sum of values at odd places.
  return 0;
}  
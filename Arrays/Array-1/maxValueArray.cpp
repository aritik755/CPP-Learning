#include<iostream>
using namespace std;
int main(){

  int array[] = {12,56,324,785,14};

  int max = array[0];
  for(int i = 1; i < 5; i++){
    if(array[i] > max){
      max = array[i];
    }
  }
  cout<<"Maximum value of the element in the array: "<<max<<endl;
  return 0;
}
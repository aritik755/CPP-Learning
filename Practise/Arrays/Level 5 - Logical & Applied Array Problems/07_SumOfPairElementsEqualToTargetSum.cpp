// 7. Count how many pairs of elements have a sum equal to a given number k.
#include<iostream>
using namespace std;
int main(){

  int array[] = {10,22,54,45,65,98,78,56,40,100};
  int n = sizeof(array)/sizeof(array[0]);

  int k;
  cout<<"Enter the target value: ";
  cin>>k;

  int count = 0;
  for(int i = 0; i < n; i++){
    for(int j = i+1; j < n; j++){
      if(array[i] + array[j] == k){
        cout<<"("<<array[i]<<","<<array[j]<<")"<<endl;
        count++;
      }
    }
  }

  cout<<"Number of pairs whose sum are equal to target element: "<<count<<endl;
  return 0;
}
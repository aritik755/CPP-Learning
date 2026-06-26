#include<iostream>
using namespace std;

void merge(int arr1[], int n1, int arr2[], int n2, int arr3[]){
  int a = 0; //arr1
  int b = 0; //arr2
  int c = 0; //arr3

  while(a < n1 && b < n2){
    if(arr1[a] < arr2[b]){
      arr3[c++] = arr1[a++];
    }
    else{
      arr3[c++] = arr2[b++];
    }
  }

  while(a < n1){
    arr3[c++] = arr1[a++];
  }
  while(b < n2){
    arr3[c++] = arr2[b++];
  }
}

int main(){

  int arr1[] = {5,8,10};
  int arr2[] = {2,7,8};
  int n1 = sizeof(arr1)/sizeof(arr1[0]);
  int n2 = sizeof(arr2)/sizeof(arr2[0]);
  
  int n3 = n1 + n2;
  int arr3[n3];
  merge(arr1, n1, arr2, n2, arr3);

  cout<<"Merged Array: "<<endl;
  for(int i = 0; i < n3; i++){
    cout<<arr3[i]<<" ";
  }cout<<endl;

  return 0;
}

//Time Complexity = O(n); where, n1+n2=n
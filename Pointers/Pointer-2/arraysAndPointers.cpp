#include<iostream>
using namespace std;
int main(){

  int arr[3] = {15,55,56};
  int n = sizeof(arr)/sizeof(arr[0]);
  int *ptr = &arr[0]; 

  cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr<<endl;

  cout<<*(arr + 0)<<endl; // 0th index value
  cout<<*(arr + 1)<<endl; // 1st index value
  cout<<*(arr + 2)<<endl; // 2nd index value

  for(int i = 0; i < n; i++){
    cout<<*(arr + i)<<" ";
  }

  return 0;
}
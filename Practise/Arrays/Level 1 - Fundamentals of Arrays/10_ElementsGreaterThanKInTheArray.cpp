// 10. Take n elements and print only those greater than a given value k.
#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the size of array: ";
  cin>>n;

  int array[n];
  
  cout<<"Enter the elements of array: "<<endl;
  for(int i = 0; i < n; i++){
    cin>>array[i];
  }

  int k;
  cout<<"Enter the target element(k): ";
  cin>>k;

  cout<<"Elements greater than target element: "<<endl;
  for(int i = 0; i < n; i++){
    if(array[i] > k){
      cout<<array[i]<<endl;
    }
  }

  return 0;
}
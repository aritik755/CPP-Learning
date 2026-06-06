// 2. Find the sum of all elements in an array.
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

  int sum = 0;
  for(int i = 0; i < n; i++){
    sum += array[i];
  }

  cout<<"Sum of Elements of array: "<<sum<<endl;

  return 0;
}
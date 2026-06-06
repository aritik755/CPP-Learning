// 2. Count how many times a given element appears.
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

  int x;
  cout<<"Enter the target element(x): "<<endl;
  cin>>x;

  int count = 0;
  for(int i = 0; i < n; i++){
    if(array[i] == x){
      count++;
    }
  }
  
  cout<<"The Target Element "<<x<<" is present "<<count<<" times in the Array."<<endl;
  return 0;
}
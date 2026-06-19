// In bubble sort we compare adjacent elements and swap them to find the sorted array.
#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &v){
  int n = v.size();

  for(int i = 0; i < n-1; i++){
    for(int j = 0; j < n-1-i; j++){
      if(v[j] > v[j+1]){
        swap(v[j],v[j+1]);
      }
    }
  }
  return;
}
int main(){

  int n;
  cout<<"Enter the number of elements of the array: ";
  cin>>n;

  vector<int> v(n);
  
  cout<<"Enter the elements of array:"<<endl;
  for(int i = 0; i < n; i++){
    cin>>v[i];
  }

  bubbleSort(v);

  cout<<"Sorted Array: "<<endl;
  for(int i = 0; i < n; i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;

  return 0;
}

// Maximum number of swaps in worst case of bubble sort will be when the array will be in descending order.
// v[5] = {50,40,30,20,10};
// No Of Swaps:- n(n-1)/2
// Time Complexity = O(n(n-1)/2) = O(n^2)
// Space Complexity = O(1)
// It is a Stable Sort.
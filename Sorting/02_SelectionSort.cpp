// In Selection sort we traverse the array and and put the minimum element in the start of sorted array till we find the sorted array.
#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &v){
  int n = v.size();

  for(int i = 0; i < n-1; i++){
    int minIndex = i;
    for(int j = i+1; j < n; j++){
      if(v[j] < v[minIndex]){
        minIndex = j;
      }
    }
      if(minIndex != i){
        swap(v[i], v[minIndex]);
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

  selectionSort(v);

  cout<<"Sorted Array: "<<endl;
  for(int i = 0; i < n; i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;

  return 0;
}

// Time Complexity = O(n(n-1)/2) = O(n^2)
// Space Complexity = O(1)
// It is a unstable sort.
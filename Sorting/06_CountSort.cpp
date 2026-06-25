/*In Count sort we use frequency to sort the array.*/
#include<iostream>
#include<vector>
using namespace std;

void countSort(vector<int> &v){

  int n = v.size();

  // Finding Maximum Element
  int maxElement = 0;
  for(int i = 0; i < n; i++){
    if(v[i] > maxElement){
      maxElement = v[i];
    }
  }

  // Create Frquency Vector
  vector<int> freq(maxElement + 1);
  for(int i = 0; i < n; i++){
    freq[v[i]]++;
  }

  // Calculate Cummulative Frequency
  for(int i = 1; i <= maxElement; i++){
    freq[i] += freq[i-1];
  }

  // Calculate the sorted array
  vector<int> ans(n);
  for(int i = n-1; i >= 0; i--){
    ans[--freq[v[i]]] = v[i];
  }

  // copy back the ans array into original array 
  for(int i = 0; i < n; i++){
    v[i] = ans[i];
  }
}

int main(){

  int n;
  cout<<"Enter the number of elements of the array: ";
  cin>>n;

  vector<int> v(n);

  cout<<"Enter the elements of the array:"<<endl;
  for(int i = 0; i < n; i++){
    cin>>v[i];
  }

  countSort(v);

  cout<<"Sorted Array:"<<endl;
  for(int i = 0; i < n; i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;

  return 0;
}

// Time Complexity = O(n) // Most Optimum among all the sorting algorithms.
// Space Complexity = O(n + k)
// Quick Sort is a stable sort.
/* In radix sort we sort the array on the basis of (ones tens hundreds) digit the maximum number present in the array using count sort.*/
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

void countSort(vector<int> &v, int pos){

  int n = v.size(); 

  // Create Frquency Vector
  vector<int> freq(10, 0);
  for(int i = 0; i < n; i++){
    freq[(v[i]/pos)%10]++;
  }

  // Calculate Cummulative Frequency
  for(int i = 1; i < 10; i++){
    freq[i] += freq[i-1];
  }

  // Calculate the sorted array
  vector<int> ans(n);
  for(int i = n-1; i >= 0; i--){
    ans[--freq[(v[i]/pos)%10]] = v[i];
  }

  // copy back the ans array into original array 
  for(int i = 0; i < n; i++){
    v[i] = ans[i];
  }
}

void radixSort(vector<int> &v){

  int maxElement = INT_MIN;
  for(auto x:v){
    maxElement = max(x, maxElement);
  } 

  for(int pos = 1; maxElement/pos > 0; pos*=10){
    countSort(v, pos);
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

  radixSort(v);

  cout<<"Sorted Array:"<<endl;
  for(int i = 0; i < n; i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;

  return 0;
}

// Time Complexity = O(d*n) // d is number of digits. 
// Space Complexity = O(n)
// Radix Sort is a stable sort. 
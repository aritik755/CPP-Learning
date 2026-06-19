/* In Insertion sort we will consider the first element the sorted part of array and the remaining element the unsorted part
and traverse the array and send the elements to sorted part from the unsorted part and shift the elements and put the first 
element of unsorted part in the sorted part on the correct place and shift the rest elements.*/
#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &v){
  int n = v.size();

  for(int i = 1; i < n; i++){
    int currentElement = v[i];
    int j = i - 1;

    while(j >= 0 && v[j] > currentElement){
      v[j + 1] = v[j];
      j--; 
    }
  
    v[j + 1] = currentElement;
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

  insertionSort(v);

  cout<<"Sorted Array: "<<endl;
  for(int i = 0; i < n; i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;

  return 0;
}

// Time Complexity = O(n(n-1)/2) = O(n^2)
// Time Complexity(Best Case) = Ω(n)
// Space Complexity = O(1)
// It is a Stable Sort.
/* Merge sort is an sorting algorithm in which we are dividing an array into smaller sub parts for sorting and combining them together to 
to find a complete sorted array. Here we will using recursion and divide and conquer algorithm.*/
#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){

  int an = mid - l + 1;
  int bn = r - mid;
  // Create 2 temporary arrays.
  int a[an];
  int b[bn];

  for(int i = 0; i < an; i++){
    a[i] = arr[l + i];
  }
  for(int j = 0; j < bn; j++){
    b[j] = arr[mid+1+j];
  }

  int i = 0; // Initial Index of first subarray(a).
  int j = 0; // Intial Index of second subarray(b).
  int k = l; // Initial Index of merged subarray.

  while(i < an && j < bn){
    if(a[i] < b[j]){
      arr[k++] = a[i++];
    }
    else{
      arr[k++] = b[j++];
    }
  }

  while(i < an){
    arr[k++] = a[i++];
  }
  while(j < bn){
    arr[k++] = b[j++];
  }

  return;
}

void mergeSort(int arr[], int l, int r){
   
  // Base Case
  if(l>=r){
    return;
  }

  int mid = (l+r)/2;
  mergeSort(arr, l, mid);
  mergeSort(arr, mid + 1, r);
  merge(arr, l, mid, r);
}

int main(){

  int n;
  cout<<"Enter the number of elements of the array: ";
  cin>>n;

  int arr[n];

  cout<<"Enter the elements of the array:"<<endl;
  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }

  mergeSort(arr, 0, n-1);

  cout<<"Sorted Array:"<<endl;
  for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  return 0;
}

// Time Complexity = O(nlogn)
// Space Complexity = O(n)
// Merge Sort is a stable sort.
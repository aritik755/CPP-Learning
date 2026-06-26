#include<iostream>
using namespace std;

int partition(int arr[], int l, int r){

  int pivot = arr[r];

  int i = l;
  for(int j = l; j < r; j++){
    if(arr[j] < pivot){
      swap(arr[i],arr[j]);
      i++;
    }
  }
  swap(arr[i], arr[r]);

  return i;
}

int kthSmallest(int arr[], int l, int r, int k){


  if(k > 0 && k <= r-l+1){

    int pos = partition(arr, l, r); // position of pivot element

    if(pos-l == k-1){
      return arr[pos];
    }
    else if(pos-l>k-1){
      return kthSmallest(arr, l, pos-1, k);
    }
    else{
      return kthSmallest(arr, pos+1, r, k-(pos-l+1));
    }
  }
  return INT16_MAX;
}

int main(){

  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;

  int arr[n];

  cout<<"Enter the elements of the array: "<<endl;
  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }

  int k;
  cout<<"Enter the value of k: ";
  cin>>k;

  cout<<"Kth smallest element is "<<kthSmallest(arr, 0, n-1, k)<<endl;

  return 0;
}

// Time Complexity = O(n^2)(Worst Case)
// Time Complexity = O(n)(Average Case)
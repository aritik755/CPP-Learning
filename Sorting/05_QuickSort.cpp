/* Quick sort is an sorting algorithm in which we assign a pivot element(last element) and put the smaller elements before the pivot and
larger after the pivot and divide in subarrays to find a complete sorted array. Here we will using recursion and divide and conquer ]
algorithm.*/
#include<iostream>
using namespace std;

int partition(int arr[], int first, int last){

  int pivot = arr[last]; 
  int i = first - 1; // For inserting elements < pivot.
  int j = first; // For finding elements < pivot.

  for(; j < last; j++){
    if(arr[j] < pivot){
      i++;
      swap(arr[i], arr[j]);
    }
  }

  // Now i is pointing to the last element < pivot.
  // correct position for the pivot will be i+1.
  swap(arr[i+1], arr[last]);
  return i+1;
}

void quickSort(int arr[], int first, int last){
   
  // Base Case
  if(first >= last){
    return;
  }

  // Recursive Case
  int pi = partition(arr, first, last);
  quickSort(arr, first, pi - 1);
  quickSort(arr, pi + 1, last);
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

  quickSort(arr, 0, n-1);

  cout<<"Sorted Array:"<<endl;
  for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  return 0;
}

// Time Complexity(Best Case) = Ω(nlogn)
// Time Complexity(Worst Case) = O(n^2)
// Space Complexity = O(n)
// Quick Sort is a unstable sort.
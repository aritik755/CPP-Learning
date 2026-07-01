/* This code is applicable on the program in which array is sorted in the ascending order so it will find you the index of your target
element. */

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &input, int target){ 
  int lo = 0;
  int hi = input.size() - 1;

  while(lo <= hi){
    int mid = lo + (hi - lo)/2;

    if(input[mid] == target) return mid;
    else if(input[mid] < target){
      lo = mid + 1;
    }
    else{
      hi = mid - 1;
    }
  }
  return -1;
}

int main(){

  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;

  vector<int> v(n);

  cout<<"Enter the elements of the array:"<<endl;
  for(int i = 0; i < n; i++){
    cin>>v[i];
  }

  int x;
  cout<<"Enter the target element: ";
  cin>>x;

  cout<<"Index of the target element: "<<binarySearch(v, x)<<endl;

  return 0;
}

// Space Complexity = O(1)
// Time Complexity = O(log n)
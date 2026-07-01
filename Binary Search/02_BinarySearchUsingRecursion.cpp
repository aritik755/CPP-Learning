/* This code is applicable on the program in which array is sorted in the ascending order so it will find you the index of your target
element. */

#include<iostream>
#include<vector>
using namespace std;

int f(vector<int> &input, int target, int lo, int hi){
  if (lo > hi) return -1;

  int mid = lo + (hi - lo)/2;;

  if(input[mid] == target) return mid;

  if(input[mid] < target){
    return f(input, target, mid + 1, hi);
  }
  else{
    return f(input, target, lo, mid - 1);
  }
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

  cout<<"Index of the target element: "<<f(v, x, 0, n-1)<<endl;

  return 0;
}

// Space Complexity = O(log n) // call stack space
// Time Complexity = O(log n)
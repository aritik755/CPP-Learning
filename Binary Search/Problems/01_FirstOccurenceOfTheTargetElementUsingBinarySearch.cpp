#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int> &input, int target){ 
  int lo = 0;
  int hi = input.size() - 1;
  int ans = -1;

  while(lo <= hi){
    int mid = lo + (hi - lo)/2;

    if(input[mid] == target){
      ans = mid;
      hi = mid - 1;
    } 
    else if(input[mid] > target){
      hi = mid - 1;
    }
    else{
      lo = mid + 1;
    }
  }
  return ans;
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

  cout<<"First Occurence of the target element: "<<firstOccurence(v, x)<<endl;

  return 0;
}

// Space Complexity = O(1)
// Time Complexity = O(log n)
#include<iostream>
#include<vector>
using namespace std;

int lowerBound(vector<int> &input, int target){ // first index > target 
  int lo = 0;
  int hi = input.size() - 1;
  int ans = -1;

  while(lo <= hi){
    int mid = lo + (hi - lo) / 2;
    if(input[mid] >= target){
      hi = mid - 1;
      ans = mid;
    }
    else{
      lo = mid + 1;
    }
  }
}

int upperBound(vector<int> &input, int target){ 
  int lo = 0;
  int hi = input.size() - 1;
  int ans = -1;

  while(lo <= hi){
    int mid = lo + (hi - lo) / 2;
    if(input[mid] > target){
      ans = mid;
      hi = mid - 1; // righthalf discarded
    }
    else{
      lo = mid + 1;
    }
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

  vector<int> result;
  int lb = lowerBound(v,x);
  if(v[lb] != x){
    result.push_back(-1);
    result.push_back(-1);
  }
  else{
    int ub = upperBound(v, x);
    result.push_back(lb);
    result.push_back(ub - 1);
  }

  cout<<"First & Last Occurence of the target element: ["<<result[0]<<","<<result[1]<<"]"<<endl;
}

// Space Complexity = O(1)
// Time Complexity = O(log n)
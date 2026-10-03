/*
Given an array arr[] of length N, find the length of the longest subarray with a sum equal to 0.   

Input 1:n = 8
        arr[] = {15, -2, 2, -8, 1, 7, 10, 23}   
Output 1:5   

Input 2:n = 3
        arr[] = {1, 2, 3}   
Output 2:0
*/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int maxLengthZeroSumSubarray(vector<int> &v){
  unordered_map<int, int> m;
  int prefixSum = 0;
  int maxLength = 0;

  for(int i = 0; i < v.size(); i++){
    prefixSum += v[i];
    if(prefixSum == 0) maxLength++;

    if(m.find(prefixSum) != m.end()){
      maxLength = max(maxLength, i - m[prefixSum]);
    }
    else{
      m[prefixSum] = i;
    }
  }

  return maxLength;

}

int main(){

  int n;
  cin>>n;

  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin>>v[i];
  }

  cout<<"Maximum length of subarray with sum zero: "<<maxLengthZeroSumSubarray(v)<<endl;

  return 0;
}
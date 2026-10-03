/*
Given an array of length n and a target, return a pair whose sum is equal to the target. 
If there is no pair present, return -1.   

Input 1:n = 7Elements = [1, 4, 5, 11, 13, 10, 2]
Target = 13   
Output 1: [3, 6]   

Input 2:n = 5Elements = [9, 10, 2, 3, 5]
Target = 15   
Output 2: [1, 4]   
*/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> targetSumPair(vector<int> &v, int sum){

  unordered_map<int, int> m;
  vector<int> ans(2, -1);

  for(int i = 0; i < v.size(); i++){
    if(m.find(sum-v[i]) != m.end()){
      ans[0] = m[sum - v[i]] ;
      ans[1] = i;
      return ans;
    }
    else{
      m[v[i]] = i;
    }
  }
  return ans;
}

int main(){

  int n;
  cin>>n;

  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin>>v[i];
  }

  int targetSum = 0;
  cin>>targetSum;

  vector<int> ans = targetSumPair(v, targetSum);
  cout<<"["<<ans[0]<<","<<ans[1]<<"]"<<endl;

  return 0;
}
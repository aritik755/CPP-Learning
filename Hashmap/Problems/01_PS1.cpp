/*
Can you make the strings equal?   

Given an array of strings. You can move any number of characters from one string to any other string
any number of times. You just have to make all of them equal.   
Print "Yes" if you can make every string in the array equal by using any number of operations
otherwise print "No".   

Input 1: ["collegeee", "coll", "collegge"]   
Output 1: Yes   
Explanation: string at 1 index can take two 'e' from 0 index string and one 'g' from 2 index string.   

Input 2: ["wall", "ah", "wallahah"]   
Output 2: No 
Explanation: Here we don't have enough number of characters to make all strings equal.
*/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool canMakeEqual(vector<string> &v){
  int n = v.size();

  unordered_map<char, int> m;

  for(auto str:v){
    for(char c:str){
      m[c]++;
    }
  }

  for(auto ele:m){
    if(ele.second % n != 0) return false;
  }

  return true;
}

int main(){

  int n;
  cin>>n;

  vector<string> v(n);
  for(int i = 0; i < n; i++){
    cin>>v[i];
  }

  cout<<(canMakeEqual(v) ? "Yes" : "No")<<endl;

  return 0;
}
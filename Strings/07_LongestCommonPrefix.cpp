#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

string longestCommonPrefix(vector<string> &str){

  // Time Complexity = O(nlogn*m)
  // //Sorting of array of string
  // sort(str.begin(), str.end());

  // string s1 = str[0]; // First String
  // int i = 0;
  // string s2 = str[str.size() - 1]; // Last String
  // int j = 0;

  // string ans = "";
  // while(i < s1.size() && j < s2.size()){
  //   if(s1[i] == s2[j]){
  //     ans += s1[i];
  //     i++; j++;
  //   }
  //   else{
  //     break;
  //   }
  // }
  // return ans;

  // Time Complexity = O(n*m)
  // Keeping first string const and comparing them with other strings
  string s1 = str[0];
  int ans_length = s1.size();

  for(int i = 1; i < str.size(); i++){
    int j = 0;
    while(j < s1.size() && j < str[i].size() && s1[j] == str[i][j]){ // Finding the common prefix string length
      j++;
    }
    ans_length = min(ans_length, j); // Updating length of ans string
  }
  string ans = s1.substr(0, ans_length);
  return ans;
}

int main(){

  int n;
  cout<<"Enter the no. of strings: ";
  cin>>n;

  cout<<"Enter strings:"<<endl;
  vector<string> str(n);
  for(int i = 0; i < n; i++){
    cin>>str[i];
  }

  cout<<"Longest Common Prefix: "<<longestCommonPrefix(str)<<endl;

  return 0;
}


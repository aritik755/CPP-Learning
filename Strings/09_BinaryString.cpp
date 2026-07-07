#include<iostream>
#include<cstring>
using namespace std;

int longestOnes(string &s, int k){

  int start = 0;
  int end = 0;
  int zero_count = 0;
  int max_length = 0;

  for(; end < s.length(); end++){
    if(s[end] == '0'){
      zero_count++;
    }

    while(zero_count > k){
      if(s[start] == '0') zero_count--;
      start++; // contracting the window
    }

    // zero_count <= k
    max_length = max(max_length, end-start+1);
  }
  return max_length;
}

int main(){

  string s;
  cout<<"Enter a binary string: ";
  cin>>s;

  int k;
  cout<<"Enter the value of k(Max. no. of zeros): ";
  cin>>k;

  cout<<"Length of the longest substring: "<<longestOnes(s, k)<<endl;

  return 0;
}

// Time Complexity = O(n), n = length of string 
// Space Complexity = O(1)
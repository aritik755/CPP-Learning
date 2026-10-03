/*
Check whether two Strings are anagram of each other. Return true if they are else return false. 
An anagram of a string is another string that contains the same characters, only the order of 
characters can be different. For example, "abcd" and "dabc" are an anagram of each other.   

Input 1:triangle
        integral   
Output 1: True   

Input 2:anagram
        grams   
Output 2: False   
*/
#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;

bool checkAnagrams(string s1, string s2){
  
  unordered_map<char, int> m;
  
  for(char c:s1){
    m[c]++;
  }

  for(char c:s2){
    m[c]--;
  }

  for(auto ele:m){
    if(ele.second != 0) return false;
  }

  return true;
}

int main(){

  string s1, s2;
  getline(cin, s1);
  getline(cin, s2);

  cout<<(checkAnagrams(s1, s2) ? "Anagrams" : "Not Anagrams")<<endl;

  return 0;
}
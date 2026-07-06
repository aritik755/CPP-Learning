// Anagram is same words and same count in a string.
#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

bool isAnagram(string s1, string s2){
  // Create Frequency Array

  vector<int> freq(26,0);

  //If lenghts are different for s1 and s2 return false
  if(s1.length() != s2.length()){
    return false;
  }

  // store freq of characters in s1 and s2
  for(int i = 0; i < s1.length(); i++){
    freq[s1[i] - 'a']++; // for s1, we are incrementing freq of char 
    freq[s2[i] - 'a']--; // for s2, we are decrementing freq of char
  }

  // checking is freq of every character is 0.
  for(int i = 0; i < 26; i++){
    if(freq[i] != 0){ // not anagram
      return false;
    }
  }
  return true;
}

int main(){

  string s1, s2;
  cout<<"Enter string s1 and s2: ";
  cin>>s1>>s2;

  if(isAnagram(s1, s2)){
    cout<<"Strings are anagrams"<<endl;
  }
  else{
    cout<<"Strings are not anagrams."<<endl;
  }
  return 0;
}

// Time Complexity = O(length of strings)
// Space Complexity = O(26) = Const
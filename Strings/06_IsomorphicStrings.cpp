// Isomorphic is one - one mapping and same number of characters in a string
#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

bool isIsomorphic(string s1, string s2){

  vector<int> v1(128,-1);
  vector<int> v2(128,-1);

  if(s1.size() != s2.size()){ // If strings length is not equal 
    return false;
  }

  for(int i = 0; i < s1.size(); i++){
    if(v1[s1[i]] != v2[s2[i]]){ // Checking if value of character at idx i match in both vectors.
      return false;
    }
    v1[s1[i]] = v2[s2[i]] = i; // Storing string position in vectors for characters at idx i
  }
  return true; 
}

int main(){

  string s1, s2;
  cout<<"Enter string s1 and s2: ";
  cin>>s1>>s2;

  if(isIsomorphic(s1, s2)){
    cout<<"Strings are Isomorphic."<<endl;
  }
  else{
    cout<<"Strings are not Isomorphic."<<endl;
  }
  return 0;
}

// Time Complexity = O(length of strings)
// Space Complexity = O(256) = Const
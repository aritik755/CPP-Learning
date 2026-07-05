#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

string countSort(string str){
  vector<int> freq(26,0);

  // Adding Frequency of every character in string.
  for(int i = 0; i < str.length(); i++){
    int index =  str[i] - 'a';
    freq[index]++;
  }

  // Create our sorted string
  int j = 0;
  for(int i = 0; i < 26; i++){
    while(freq[i]--){
      str[j++] = i + 'a';
    }
  }

  return str;

}

int main(){

  // Lexographical Order :- A-Z

  string str;
  cout<<"Enter a string: ";
  cin>>str;

  cout<<"Sorted String: "<<countSort(str)<<endl;

  return 0;
}

// Time Complexity = O(n) => n is length of string.
// Space Complexity = O(26) = Const
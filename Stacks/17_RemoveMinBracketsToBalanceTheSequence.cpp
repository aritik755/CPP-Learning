#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int main(){

  string s;
  cout<<"Enter the sequence:";
  getline(cin,s);

  int count = 0;
  stack<char> st;
  for(int i = 0; i < s.length(); i++){
    if(s[i] == '(') st.push('(');
    else{
      if(!st.empty()) st.pop();
      else count++;
    }
  }

  cout<<"Minimum Removals: "<<count<<endl;
  
  return 0;
}
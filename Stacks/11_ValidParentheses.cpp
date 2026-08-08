#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s){
  stack<char> st;
  for(int i = 0; i < s.length(); i++){
    char ch = s[i];
    if(ch == '(' || ch == '[' || ch == '{'){
      st.push(ch);
    }
    else{
      if(ch == ')' && !st.empty() && st.top() == '('){
        st.pop();
      }
      else if(ch == ']' && !st.empty() && st.top() == '['){
        st.pop();
      }
      else if(ch == '}' && !st.empty() && st.top() == '{'){
        st.pop();
      }
      else return false;
    }
  }
  return st.empty();
}

int main(){

  string s = "(()()())";
  cout<<isValid(s)<<endl;

  return 0;
}



#include<iostream>
#include<stack>
#include<cmath>
#include<cstring>
using namespace std;

int cal(int v1, int v2, char op){
  if(op == '^') return pow(v1,v2);
  if(op == '*') return v1*v2;
  if(op == '+') return v1+v2;
  if(op == '/') return v1/v2;
  return v1-v2; 
}

int eval(string &s){
  stack<int> st;
  for(int i = s.size()-1; i >= 0; i--){
    char ch = s[i];
    if(isdigit(ch)) st.push(ch - '0');
    else{
      int v1 = st.top();
      st.pop();
      int v2 = st.top();
      st.pop();
      st.push(cal(v2,v1,ch));
    }
  }
  return st.top();
}

int main(){

  string s;
  cout<<"Enter a Prefix Expression: ";
  getline(cin, s);

  cout<<"Evaluated Prefix Expression Value: "<<eval(s)<<endl;

  return 0;
}
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> previousGreaterElement(vector<int> &arr) {
  int n = arr.size();
  reverse(arr.begin(), arr.end());
  vector<int> output(n, -1);
  stack<int> st;
  st.push(0);
  for(int i = 1; i < n; i++){
    while(!st.empty() && arr[i] > arr[st.top()]){
      output[st.top()] = n-i-1;
      st.pop();
    }
    st.push(i);
  }
  reverse(output.begin(), output.end());
  reverse(arr.begin(), arr.end());
  return output;
}

int main(){

  vector<int> arr = {100,80,60,70,60,75,85};
   
  vector<int > res = previousGreaterElement(arr);
  for(int i = 0; i < res.size(); i++){
    cout<<(i - res[i])<<" ";
  }
  return 0;
}
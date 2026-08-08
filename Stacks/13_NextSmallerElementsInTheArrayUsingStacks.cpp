#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr) {
  int n = arr.size();
  vector<int> output(n, -1);
  stack<int> st;
  st.push(0);
  for(int i = 1; i < n; i++){
    while(!st.empty() && arr[i] < arr[st.top()]){
      output[st.top()] = arr[i];
      st.pop();
    }
    st.push(i);
  }
  return output;
}

int main(){

  vector<int> arr = {4,6,8,7,9,1,5};
   
  vector<int > res = nextSmallerElement(arr);
  cout<<"Ouput Array of next Smaller Elements: "<<endl;
  for(int i = 0; i < res.size(); i++){
    cout<<res[i]<<" ";
  }
  return 0;
}
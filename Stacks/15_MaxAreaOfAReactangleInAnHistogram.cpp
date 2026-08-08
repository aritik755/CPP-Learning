#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int histogram(vector<int> &arr){
  int n = arr.size();
  stack<int> st;
  int ans = INT16_MIN;
  st.push(0);
  for(int i = 0; i < n; i++){
    while(!st.empty() && arr[i] < arr[st.top()]){
      int element = arr[st.top()];
      st.pop();
      int nsi = i;
      int psi = (st.empty()) ? -1 : st.top();
      ans = max(ans, element*(nsi - psi - 1));
    }
    st.push(i);
  }
  while(!st.empty()){
    int element = arr[st.top()];
    int nsi = n;
    int psi = (st.empty()) ? (-1) : st.top();
    st.pop();
  }
  return ans;
}

int main(){

  vector<int> arr = {2,1,5,6,2,3,0,2,1,5,6,2,3};
  
  int ans = histogram(arr);
  cout<<"Maximum Area of the Reactangle: "<<ans<<endl;

  return 0;
}
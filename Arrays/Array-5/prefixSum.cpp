#include<iostream>
#include<vector>
using namespace std;

void runningSum(vector<int> &v){
  
  for(int i = 1; i < v.size(); i++){
      v[i] += v[i-1];
  }
  return;
}

int main(){

  int n;
  cout<<"Enter the size of the vector: ";
  cin>>n;

  vector<int> v;
  
  cout<<"Enter the Elements: ";
  for(int i = 0; i < n; i++){
    int elements;
    cin>>elements;
    v.push_back(elements);
  }

  runningSum(v);

  cout<<"Array after suming: ";
  for(int i = 0; i < n; i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
    return 0;
}
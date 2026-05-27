#include<iostream>
#include<vector>
using namespace std;

bool checkPrefixSuffix(vector<int> &v){
    int totalSum = 0;
    for(int i = 0; i < v.size(); i++){
      totalSum += v[i];
    }

    int prefixSum = 0;
    for(int i = 0; i < v.size(); i++){
      prefixSum += v[i];
      int suffixSum = totalSum - prefixSum;

      if(suffixSum==prefixSum){
      return true;
      }
    }
    return false;
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

  cout<<"PrefixSum = SuffixSum: "<<checkPrefixSuffix(v)<<endl;

    return 0;
}
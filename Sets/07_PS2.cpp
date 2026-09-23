/*
Add the common elements

Given 2 vectors v1 and v2. Find out the common elements 
between the two and return the sum of them.

Input:

V1 = {1, 1, 2, 3, 3, 3}

V2 = {5, 6, 7, 5, 2, 3, 6}

Output:

5

Explanation:

The values common between V1 and V2 are: 2, 3. So, sum is 2+3 = 5.*/

#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){

  int n, m;
  cout<<"Enter the size of vector n and m:";
  cin>>n>>m;

  vector<int> v1(n);
  vector<int> v2(m);

  cout<<"Enter the elements of vector v1: "<<endl;
  for(int i = 0; i < n; i++){
    cin>>v1[i];
  }
  
  cout<<"Enter the elements of vector v2: "<<endl;
  for(int i = 0; i < m; i++){
    cin>>v2[i];
  }

  int sum = 0;

  set<int> s1;
  for(auto ele:v1){
    s1.insert(ele);
  }

  for(auto ele:v2){
    if(s1.find(ele) != s1.end()){
      sum += ele; 
    }
  }

  cout<<"Ans: "<<sum<<endl;

  
  return 0;
}
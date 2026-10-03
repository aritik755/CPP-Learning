/*
Sum of Repetitive Elements   

You are given an integer n, representing the number of elements. Then, you will be given n elements. 
You have to return the sum of repetitive elements i.e. the elements that appear more than one time.   

Input:n = 7Elements = [1, 1, 2, 1, 3, 3, 3]   

Output:4   
Explanation:The repetitive elements are 1, 3 and the sum is 4.
*/

#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of elements: ";
  cin>>n;
  
  vector<int> v(n);

  cout<<"Enter the elements: ";
  for(int i = 0; i < n; i++){
    cin>>v[i];
  }

  map<int, int> m;
  for(int i = 0; i < n; i++){
    m[v[i]]++; // Storing the frequency of every element present in the input array.
  }

  int sum = 0;
  for(auto pair:m){
    if(pair.second > 1){
      sum += pair.first;
    }
  }

  cout<<"Sum of Repetitive Elements: "<<sum<<endl;

  return 0;
}
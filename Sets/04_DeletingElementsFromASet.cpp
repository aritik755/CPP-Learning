#include<iostream>
#include<set>
using namespace std;
int main(){

  set<int> set1;
  set1.insert(5);
  set1.insert(4);
  set1.insert(3);
  set1.insert(2);
  set1.insert(1);
  for(auto value:set1){
    cout<<value<<" ";
  }cout<<endl;

  // Deletiom from set using value. (Time Complexity = O(logn))
  // set1.erase(4);
  // for(auto value:set1){
  //   cout<<value<<" ";
  // }cout<<endl;

  // Deletiom from set using its position itr function. (Time Complexity = O(logn))
  // auto itr = set1.begin(); // Creation of iterator
  // advance(itr,3); // Moving itr to 4th position using advance function
  // set1.erase(itr);
  // for(auto value:set1){
  //   cout<<value<<" ";
  // }cout<<endl;

  // Deleting range of elements in a set. (Time Complexity = O(n))
  auto start_itr = set1.begin();
  start_itr++; // 2

  auto end_itr = set1.begin();
  advance(end_itr, 3); // 4

  set1.erase(start_itr, end_itr);
  for(auto value:set1){
    cout<<value<<" ";
  }cout<<endl;


  return 0;
}
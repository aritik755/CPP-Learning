// Iterator -> For traversing a set.
// set_name.begin() - Iterator pointing to the first element of my set.
// set_name.end() - Iterator pointing to the position after the last of the set.

#include<iostream>
#include<set>
using namespace std;
int main(){

  set<int> set1;
  // Insertion in a set
  set1.insert(3);
  set1.insert(2);
  set1.insert(1);

  cout<<set1.size()<<endl;
  
  // Traversing a set
  set<int>::iterator itr;
  for(itr = set1.begin(); itr != set1.end(); itr++){
    cout<<*itr<<endl;
  }

  // for each loop
  for(auto value:set1){
    cout<<value<<" ";
  }

  return 0;
}
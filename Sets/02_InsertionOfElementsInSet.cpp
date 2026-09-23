// set_name.insert(value);
// set1.insert(4);
// set1.insert(3);
// Time Complexity of insert Function - O(log n)
// It returns a iterator to the inserted value.

#include<iostream>
#include<set>
using namespace std;
int main(){

  set<int> set1;

  set1.insert(3);
  set1.insert(2);
  set1.insert(1);

  cout<<set1.size()<<endl;

  set1.insert(3);
  cout<<set1.size()<<endl; 
  // size remains same because duplicate value is added.
  // and set contains only unique values

  return 0;
}
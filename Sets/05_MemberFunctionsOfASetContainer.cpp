// Types of Member Functions in a set container
// 1. size() :- Obtain the size of set.
// 2. max_size() :- Maximum number of elements set container can hold.
// 3. empty() :- Return true if set is empty else false.
// 4. clear() :- Removes all elements from set.
// 5. find() :- Returns position of element if present, else returns end iterator.
// 6. count() :- Returns number of occurrences of an element.
// 7. lower_bound() :- Returns element if present, else return just greater value.
// 8. upper_bound() :- Return next greater value.
// 9. rbegin() :- Returns iterator to first elememt of set in reverse order.
// 10. rend() :- Returns iterator to position after last element in reverse order.

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

  // Search Operation
  if(set1.find(4) != set1.end()){
    cout<<"Value is present."<<endl;
  }
  else{
    cout<<"Value is not present."<<endl;
  }


  return 0;
}
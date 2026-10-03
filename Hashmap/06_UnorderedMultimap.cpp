// STL container which stores key-value pairs.
// In unordered_multimap the elements are unordered.
// Duplicate keys are allowed in the unordered_multimap.
// Time complexity of insertion, deletion and retreival/Search is O(1) in avg case and O(n) in worst case in unordered map.
// Maps are implemented using Hashing.

// Member Functions in unordered_multimap:-
/* 1. erase() :- (i) map.erase(itr) --> Deleting an key-value pair using iterator.
              (ii) map.erase(key) --> Deleting an key-value pair using key.
              (iii) map.erase(str_itr, end_itr) --> Deleting range of elements using iterators.*/ 
              
/* 2. find() :- Returns iterator to target element if present else it returns 
map.end() iterator (m.end() --> returns the iterator after the last element). (m.find(key))*/

// 3. count() :- To determine no. of occurrences of target key. (m.count(key))

// 4. begin() :- Returns an iterator to the first element.(m.begin())

// 5. end() :- Returns an iterator to element after the last element. (m.end())

#include<iostream>
#include<unordered_map>
using namespace std;
int main(){

  unordered_multimap<string, int> fruitcount;

  fruitcount.insert(make_pair("Apple", 6));
  fruitcount.insert(make_pair("Mango", 34));
  fruitcount.insert(make_pair("Apple", 56));

  for(auto pair:fruitcount){
    cout<<pair.first<<"-"<<pair.second<<endl;
  }
  return 0;
}
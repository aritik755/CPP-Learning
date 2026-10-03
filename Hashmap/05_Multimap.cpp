// STL container which stores key-value pairs.
// The elements are stored in ascending/ descending order.
// Duplicate keys are allowed in the multimap.
// Maps are implemented through binary search tree(BST).
// Time complexity of insertion, deletion and retreival/Search is O(log n) in unordered map.

// Member Functions in multimap:-
/* 1. erase() :- (i) map.erase(itr) --> Deleting an key-value pair using iterator.
              (ii) map.erase(key) --> Deleting an key-value pair using key.
              (iii) map.erase(str_itr, end_itr) --> Deleting range of elements using iterators.*/ 
              
/* 2. find() :- Returns iterator to target element if present else it returns 
map.end() iterator (m.end() --> returns the iterator after the last element). (m.find(key))*/

// 3. count() :- To determine no. of occurrences of target key. (m.count(key))

// 4. begin() :- Returns an iterator to the first element.(m.begin())

// 5. end() :- Returns an iterator to element after the last element. (m.end())

#include<iostream>
#include<map>
using namespace std;
int main(){

  multimap<string, int> directory;

  directory.insert(make_pair("Ritik", 158));
  directory.insert(make_pair("Vinay", 182));
  directory.insert(make_pair("Vinay", 183));
  // directory["name"] = 51465; // This syntax is not allowed in multimap.

  for(auto pair:directory){
    cout<<pair.first<<"-"<<pair.second<<endl;
  }

  cout<<directory.count("Vinay")<<endl;

  return 0;
}
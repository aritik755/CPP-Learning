// STL container which stores key-value pairs.
// In unordered map the elements are unordered.
// Maps cannot have duplicate keys.(Unique Keys)
// Time complexity of insertion, deletion and retreival/Search is O(1) in unordered map.
// Maps are implemented using Hashing.

// Member Functions in unordered map:-
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

  unordered_map<int, string> record;

  record.insert(make_pair(158, "Ritik"));
  record[183] = "Vinay";
  record[162] = "Sahil";
  record[187] = "Yatharth";

  for(auto element:record){
    cout<<element.first<<" - "<<element.second<<endl;
  }

  return 0;
}
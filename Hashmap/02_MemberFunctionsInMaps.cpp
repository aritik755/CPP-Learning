// Member Functions in Maps:-

/* 1. erase() :- (i) map.erase(itr) --> Deleting an key-value pair using iterator.
              (ii) map.erase(key) --> Deleting an key-value pair using key.
              (iii) map.erase(str_itr, end_itr) --> Deleting range of elements using iterators.*/ 

/* 2. swap() :- Swaping elements between two maps of same datatype.
            (i) m1.swap(m2);
            (ii) swap(m1, m2); */

// 3. clear() :- Removing all the elements from the map. (m.clear())

// 4. empty() :- To check whether the map is empty or not. (m.empty()) --> return 1 if empty else 0.

// 5. size() :- To determine the size of the map.(No of elements present in the map)

// 6. max_size() :- Gives the max size.

/* 7. find() :- Returns iterator to target element if present else it returns 
map.end() iterator (m.end() --> returns the iterator after the last element). (m.find(key))*/

// 8. count() :- To determine no. of occurrences of target key. (m.count(key))

// 9. upper_bound() :- Returns an iterator to next greater element.

// 10. lower_bound() :- Returns iterator to element if present else iterator to next greater element.

// 11. begin() :- Returns an iterator to the first element.(m.begin())

// 12. end() :- Returns an iterator to element after the last element. (m.end())

// 13. rbegin() :- Returns an iterator to the first element in reverse order.(m.rbegin())

// 14. rend() :- Returns an iterator to element after the last element in reverse order. (m.rend()) 

#include<iostream>
#include<map>
#include<cstring>
using namespace std;
int main(){

  map<string,int> directory; // Default(Ascending)
  // map<string,int, greater<string>> directory; // Descending

  directory["Ritik"] = 158;
  directory["Sahil"] = 162;
  directory["Vinay"] = 183;
  directory["Yatharth"] = 187;

  // for(auto element:directory){
  //   cout<<element.first<<"-"<<element.second<<endl;
  // }

  map<string, int>::reverse_iterator itr; // Declaring a iterator for a map with specific datatype
  for(itr = directory.rbegin(); itr != directory.rend(); itr++){
    cout<<itr->first<<" - "<<itr->second<<endl;
  }
  return 0;
}
// STL container which stores key-value pairs.
// The elements are stored in ascending/ descending order.
// Maps cannot have duplicate keys.
// Time complexity of insertion, deletion and retreival/Search is O(log n) in unordered map.
// Maps are implemented through binary search tree(BST).
// Header File :- #include<map>
// Declaration :- map<key_datatype,value_datatype> map_name;
// The map is ascending by default.
// For descending map<datatype1, datatype2, greater<datatype1>> map_name;
// Initialization :- map<datatype1, datatype2> map_name = {{key1, value1}, {key2, value2}}
// Insertion :- 1. map_name.insert(make_pair(key, value)), 2. map_name[key] = value 
/* Printing the elements :- for(auto element:map1){
                              key = element.first;
                              value = element.second
                            }
*/      
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

  for(auto element:directory){
    cout<<element.first<<"-"<<element.second<<endl;
  }

  return 0;
}
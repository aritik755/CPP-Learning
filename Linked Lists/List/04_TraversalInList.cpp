#include<iostream>
#include<list>
using namespace std;
int main(){

  list<int> l1 = {1,2,3,4,5};

  // Traversal in range based loops
  // for(auto num: l1){
  //   cout<<num<<" ";
  // }

  // Using Iterators
  for(auto itr = l1.begin(); itr != l1.end(); itr++){
    cout<<*itr<<" ";
  }cout<<endl;

  // Reverse Traversal
  for(auto itr = l1.rbegin(); itr != l1.rend(); itr++){
    cout<<*itr<<" ";
  }cout<<endl;

  // Inserting Elements
  auto itr = l1.begin();
  advance(itr, 2); // Moving 2 nodes further means the itr is at 3 
  l1.insert(itr, 6); // Inserting 5 before 3 in the list
  for(auto itr = l1.begin(); itr != l1.end(); itr++){
    cout<<*itr<<" ";
  }cout<<endl;

  l1.insert(itr, 3, 7); // Inserting 6 three times before 3 in the list
  for(auto itr = l1.begin(); itr != l1.end(); itr++){
    cout<<*itr<<" ";
  }cout<<endl;

  auto l = l1.begin();
  auto r = l1.begin();
  advance(r, 2);
  l1.insert(itr, l, r); // 1 2 1 2 3 4 5
  for(auto itr = l1.begin(); itr != l1.end(); itr++){
    cout<<*itr<<" ";
  }cout<<endl;

  // 1 2 1 2 3 4 5
  auto s_itr = l1.begin();
  advance(s_itr,2); // Now s_itr is pointing to 3rd element.

  auto e_itr = l1.begin();
  advance(e_itr, 4); // Now s_itr is pointing to 5th element.

  l1.erase(s_itr, e_itr);
  for(auto itr = l1.begin(); itr != l1.end(); itr++){
    cout<<*itr<<" ";
  }cout<<endl;


  return 0;
}


// Other member functions of a list container
// 1. push_front(val) :- Inserting elements in start of a list.
// 2. pop_front :- Deleting the value from the starting of the list.
// 3. push_back(val) :- Inserting elements in end of a list.
// 4. pop_back:- Deleting the value from the end of the list.
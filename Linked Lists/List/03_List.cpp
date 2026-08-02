// List is a template class in STL for implementing doubly linked list.

// Declaration of list:-

// #include<list> // Library

// list<int> list0;
// list<int> list1{1,2,3,4};
// list<int> list2 = {1,2,3,4,5};


// Iterator Functions:-
// 1. list.begin() :- Iterator for the first element.
// 2. list.end() :- Iterator for the position after the last element.
// 3. list.rbegin() :- Iterator for the first element in reverse iteration.
// 4. list.rend() :- Iterator for the position after last element in the reverse iteration.

// advance(itr, n) :- advances the itr by n places.

#include<iostream>
#include<list>
using namespace std;
int main(){

  list<int> l1 = {1,2,3,4,5};
  // list<int>::iterator itr; // Iterator for list l1
  auto itr = l1.begin(); // auto keyword will automatically define the iterator for the list l1
  // iterator stores the address of the element
  // l1.end() - iterator pointing to the memory location after 5 
  cout<<*itr<<endl;

  auto rev_itr = l1.rbegin();
  cout<<*rev_itr<<endl;
  // l1.rend() - iterator pointing to the memory location after 1

  advance(itr, 2);
  cout<<*itr<<endl;

  return 0;
}


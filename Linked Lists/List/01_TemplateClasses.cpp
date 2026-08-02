// Template Class allow us to pass data type as parameters.
#include<iostream>
using namespace std;

template <typename T>
class Node{ // template class
  public:
  T val;
  Node* next;

  Node(T data){
    val = data;
    next = NULL;
  }
};

int main(){

  Node<int>* Node1 = new Node<int> (7);
  cout<<Node1->val<<endl;

  Node<char>* Node2 = new Node<char> ('M');
  cout<<Node2->val<<endl;

  return 0;
}
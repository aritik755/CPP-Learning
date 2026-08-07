#include<iostream>
using namespace std;

class Node{
  public:
  int val;
  Node* next;

  Node(int data){
    val = data;
    next = NULL;
  }
};

class Stack{
  Node* head;
  int capacity;
  int currSize = 0;

  public:
  Stack(int c){
    capacity = c;
    currSize = 0;
    head = NULL;
  }

  bool isEmpty(){
    return head == NULL;
  }

  bool isFull(){
    return currSize == capacity;
  }

  void push(int data){
    if(currSize == capacity){
      cout<<"Overflow"<<endl;
      return;
    }
    Node* new_node = new Node(data);
    new_node->next = head;
    head = new_node;
    currSize++;
  }

  int pop(){
    if(head == NULL){
      cout<<"Underflow";
      return INT16_MIN;
    }
    Node* new_head = head->next;
    head->next = NULL;
    Node* toBeRemoved = head;
    int result = toBeRemoved->val;
    delete toBeRemoved;
    head = new_head;
    return result;
  }

  int getTop(){
    if(head == NULL){
      cout<<"Underflow";
      return INT16_MIN;
    }
    return head->val;
  }

  int size(){
    return currSize;
  }
};

int main(){

  Stack st(5);
  st.push(1);
  st.push(2);
  st.push(3);
  cout<<st.getTop()<<endl;
  st.push(4);
  st.push(5);
  cout<<st.getTop()<<endl;
  st.push(6);

  st.pop();
  st.pop();
  cout<<st.getTop()<<endl;

  return 0;
}
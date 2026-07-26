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

class LinkedList{
  public:
    Node* head;

    LinkedList(){
      head=NULL;
    }

    void insertAtTail(int value){

      Node* new_node = new Node(value);

      if(head == NULL){
        head = new_node;
        return;
      }

      Node* temp = head;
      while(temp->next != NULL){
        temp = temp->next;
      }
      temp->next = new_node;
    }

      void display(){
      Node* temp = head;
      while(temp != NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
      }cout<<"NULL"<<endl;
  }
};

// Iterative Solution
Node* reverseLL(Node* &head){
  Node* prevPtr = NULL;
  Node* currentPtr = head;

  // currentPtr->next = prevPtr;
  // move all three pointers by one step ahead
  while(currentPtr != NULL){
    Node* next = currentPtr->next;
    currentPtr->next = prevPtr;
    prevPtr = currentPtr;
    currentPtr = next;
  }

  // When this loop end my prevPtr is poiting to the last node which is my new head;
  Node* new_head = prevPtr;
  return new_head;
}

// Recursive Solution
Node* reverseLLRecursion(Node* &head){
  if(head == NULL || head->next==NULL) return head;

  Node* new_head = reverseLLRecursion(head->next);
  head->next->next = head;
  head->next = NULL;
  return new_head;
}

int main(){
  LinkedList ll;
  ll.insertAtTail(1);
  ll.insertAtTail(2);
  ll.insertAtTail(3);
  ll.insertAtTail(4);
  ll.insertAtTail(5);
  ll.display();
  // ll.head = reverseLL(ll.head);
  // ll.display();
  ll.head = reverseLLRecursion(ll.head);
  ll.display();

  return 0;
}
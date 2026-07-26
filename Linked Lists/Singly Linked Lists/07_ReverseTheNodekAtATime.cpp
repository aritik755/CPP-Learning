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

Node* reversekLL(Node* &head, int k){
  Node* currentPtr = head;
  Node* prevPtr = NULL;

  int counter = 0; // counting first k nodes
  while(currentPtr != 0 && counter < k){ // reversing first k nodes
    Node* nextPtr = currentPtr->next;
    currentPtr->next = prevPtr;
    prevPtr = currentPtr;
    currentPtr = nextPtr;
    counter++;
  }
  // currentPtr will give us (k+1)th node
  if(currentPtr != NULL){
    Node* new_head = reversekLL(currentPtr,k); // recursive call
    head->next = new_head;
  }
  return prevPtr; // prevPtr will give new head of connected linkedlist.
}

int main(){
  
  LinkedList ll;
  ll.insertAtTail(1);
  ll.insertAtTail(2);
  ll.insertAtTail(3);
  ll.insertAtTail(4);
  ll.insertAtTail(5);
  ll.insertAtTail(6);
  ll.display();
  
  ll.head = reversekLL(ll.head, 4);
  ll.display();

  return 0;
}
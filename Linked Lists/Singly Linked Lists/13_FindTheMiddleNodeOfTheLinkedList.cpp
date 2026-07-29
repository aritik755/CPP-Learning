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

Node* middleElementOfLL(Node* &head){
  Node* slowPtr = head;
  Node* fastPtr = head;

  while(fastPtr != NULL && fastPtr->next != NULL){
    slowPtr = slowPtr->next;
    fastPtr = fastPtr->next->next;
  }

  return slowPtr;
}

int main(){

  LinkedList ll1;
  ll1.insertAtTail(1);
  ll1.insertAtTail(2);
  ll1.insertAtTail(3);
  ll1.insertAtTail(4);
  ll1.insertAtTail(5);
  ll1.insertAtTail(6);
  ll1.display();

  Node* middleElement = middleElementOfLL(ll1.head);
  cout<<middleElement->val<<endl;

  return 0;
}
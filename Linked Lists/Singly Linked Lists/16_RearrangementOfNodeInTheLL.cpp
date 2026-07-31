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

Node* rotateBykLL(Node* &head, int k){
  int n = 0; // length
  Node* tail = head; // Last Node of the LL
  while(tail->next){
    n++;
    tail = tail->next;
  }
  n++;// for including the last node

  k = k % n; // k >= n 
  if(k == 0){
    return head;
  }

  tail->next = head;

  Node* temp = head;
  for(int i = 0; i < (n - k); i++){ // traversing the n-k nodes
    temp = temp->next;
  }

  Node* new_head = temp->next;
  temp->next = NULL;
  return new_head;
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
  ll1.head = rotateBykLL(ll1.head, 9);
  ll1.display();
 
  return 0;
}
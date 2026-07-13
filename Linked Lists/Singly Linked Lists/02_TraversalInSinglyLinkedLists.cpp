// Insertion of node at kth position
#include<iostream>
using namespace std;

class Node{
public:

  int val;
  Node* next; // Address of next node

  Node(int data){
    val = data;
    next = NULL;
  }

};

void insertionAtHead(Node* &head, int val){
  Node* new_node = new Node(val);
  new_node->next = head;
  head = new_node;
}

void insertionAtTail(Node* &head, int val){
  Node * new_node = new Node(val);

  Node* temp = head;
  while(temp->next != NULL){
    temp= temp->next;
  }

  temp->next = new_node;
}

void insertionAtPosition(Node* &head, int val, int pos){
  if(pos == 0){
    insertionAtHead(head, val);
    return;
  }

  Node* new_node = new Node(val);
  Node* temp = head;
  int current_pos = 0;
  while(current_pos != pos - 1){
    temp = temp -> next;
    current_pos++;
  }

  // temp is pointing to node at pos-1
  new_node->next = temp->next;
  temp->next = new_node;
}

void updateAtPosition(Node* &head, int k, int val){
  Node* temp = head;
  int current_pos = 0;
   
  while(current_pos != k){
    temp = temp->next;
    current_pos++;
  }

  //temp will be pointing to kth node
  temp->val = val;
}

void deleteAtHead(Node* &head){
  Node* temp = head; // node to be deleted
  head = head-> next;
  free(temp);
}

void display(Node* head){
  Node* temp = head;
  while(temp != NULL){
    cout<<temp->val<<"->";
    temp = temp->next;
  }
  cout<<"NULL"<<endl;
}

void deleteAtTail(Node* &head){
  Node* second_last = head;
  while(second_last->next->next != NULL){
    second_last = second_last->next;
  }

  // now second_last points to second last node
  Node* temp = second_last->next; // node to be deleted
  second_last->next = NULL;
  free(temp);
}

void deleteAtPosition(Node* head, int pos){
  if(pos == 0){
    deleteAtHead(head);
    return;
  }

  int current_pos = 0;
  Node* prev = head;
  while(current_pos != pos-1){
    prev = prev->next;
    current_pos++;
  }

  //prev is pointing to node at pos - 1
  Node* temp = prev->next; // node to be deleted
  prev->next = prev->next->next;
  free(temp);
}
int main(){

  Node* head = NULL;
  insertionAtHead(head, 2);
  display(head);
  insertionAtHead(head, 1);
  display(head);
  insertionAtTail(head,3);
  display(head);
  insertionAtPosition(head,4,1);
  display(head);
  updateAtPosition(head,2,5);
  display(head);
  deleteAtHead(head);
  display(head);
  deleteAtTail(head);
  display(head);
  deleteAtPosition(head, 1);
  display(head);

  return 0;
}
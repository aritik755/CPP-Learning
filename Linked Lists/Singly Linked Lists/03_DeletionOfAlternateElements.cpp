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


void deletionOfAlternateNodes(Node* &head){
  Node* current_node = head;
  while(current_node != NULL && current_node->next != NULL){
    Node* temp = current_node->next; // node to be deleted
    current_node->next = current_node->next->next;
    free(temp);
    current_node = current_node->next;
  }
  
};

int main(){

  LinkedList ll;
  ll.insertAtTail(1);
  ll.insertAtTail(2);
  ll.insertAtTail(3);
  ll.insertAtTail(4);
  ll.insertAtTail(5);
  ll.insertAtTail(6);
  ll.display();

  deletionOfAlternateNodes(ll.head);
  ll.display();
 
  return 0;
}
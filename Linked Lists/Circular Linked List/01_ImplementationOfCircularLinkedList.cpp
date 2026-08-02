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

class CircularLinkedList{
  public:
    Node* head;

    CircularLinkedList(){
      head = NULL;
    }

    void display(){
      Node* temp = head;
      do{
        cout<<temp->val<<"->";
        temp = temp->next;
      }while(temp != head);
      cout<<endl;
    }

    void checkCircular(){
      Node* temp = head;
      for(int i = 0; i < 20; i++){
        cout<<temp->val<<"->";
        temp = temp->next;
      }
      cout<<endl;
    }

    void insertAtStart(int val){
      Node* new_Node = new Node(val);
      if(head == NULL){
        head = new_Node;
        new_Node->next = head;
      }

      Node* tail = head;
      while(tail->next != head){
        tail = tail->next;
      }

      tail->next = new_Node;
      new_Node->next = head;
      head = new_Node;
    }

    void insertAtEnd(int val){
      Node* new_node = new Node(val);
      if(head == NULL){
        head = new_node;
        new_node->next = head;
        return;
      }

      Node* tail = head;
      while(tail->next != head){
        tail = tail->next;
      }
      tail->next = new_node;
      new_node->next = head;
    }

    void deleteAtStart(){
      if(head == NULL) return;

      Node* temp = head;
      Node* tail = head;
      while(tail->next != head){
        tail = tail->next;
      }

      head = head->next;
      tail->next = head;
      free(temp);
    }

    void deleteAtEnd(){
      if(head == NULL) return;

      Node* tail = head;
      while(tail->next->next != head){
        tail = tail->next;
      }
      Node* temp = tail->next;
      tail->next = head;
      free(temp);
    }
};

int main(){

  CircularLinkedList cll;
  cll.insertAtStart(5);
  cll.insertAtStart(4);
  cll.insertAtStart(3);
  cll.insertAtStart(2);
  cll.insertAtStart(1);
  cll.insertAtStart(0);
  cll.display();
  
  cll.checkCircular();
  
  cll.insertAtEnd(6);
  cll.insertAtEnd(7);
  cll.insertAtEnd(8);
  cll.insertAtEnd(9);
  cll.insertAtEnd(10);
  cll.display();
  
  cll.deleteAtStart();
  cll.display();
  
  cll.deleteAtEnd();
  cll.display();

  return 0;
}
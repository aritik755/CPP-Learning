// In linked list queue we will remove the element from the head of the linked list and remove the element from the tail of the linked list.
// For Enqueue the operation will be performed on the tail->next of the linked list.
// For Dequeue the operation will be performed on the head of the linked list.

#include<iostream>
using namespace std;

class Node {
  public: 
    int val;
    Node* next;

    Node(int data){
      val = data; 
      next = NULL;
    }
};

class Queue {
  Node* head;
  Node* tail;
  int size;
  public:
    Queue(){
      head = NULL;
      tail = NULL;
      size = 0;
    }
    
    void enqueue(int data) {
      Node* newNode = new Node(data);
      if(head == NULL){
        head = tail = newNode;
      }
      else{
        tail->next = newNode;
        tail = newNode;
      }
      size++;
    }

    void dequeue() {
      if(head == NULL) return;
      else{
        Node* oldHead = head;
        Node* newHead = head->next;
        head = newHead;
        if(head == NULL) tail = NULL;
        delete oldHead;
        size--;
      }
    }

    int getSize() {
      return size;
    }

    bool isEmpty() {
      return head == NULL; 
    }

    int getFront() {
      if(head == NULL) return -1;
      return head->val;
    }
};

int main(){

  Queue qu;
  qu.enqueue(10);
  qu.enqueue(20);
  qu.enqueue(30);
  qu.dequeue();
  qu.enqueue(40);

  while(!qu.isEmpty()){
    cout<<qu.getFront()<<" ";
    qu.dequeue();
  }

  return 0;
}
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

bool isPallindrome(Node* head){
  // 1. Finding the middle element of the ll 
  Node* slowPtr = head;
  Node* fastPtr = head;
  while(fastPtr && fastPtr->next){
    slowPtr = slowPtr->next;
    fastPtr = fastPtr->next->next;
  }

  // Now, slowPtr is pointing to the middle element of the linked list 
  // 2. Break the ll from the middle 
  Node* prevPtr = slowPtr;
  Node* currentPtr = slowPtr->next;
  slowPtr->next = NULL;
  
  // 3. Reverse the second half of the linked list 
  while(currentPtr){
    Node* next = currentPtr->next;
    currentPtr->next = prevPtr;
    prevPtr = currentPtr;
    currentPtr = next; 
  }

  // 4. check if two linked list are equal 
  Node* head1 = head;
  Node* head2 = prevPtr;
  while(head2){
    if(head1->val != head2->val){
      return false;
    }
    head1 = head1->next;
    head2 = head2->next;
  }
  return true;
}

int main(){

  LinkedList ll1;
  ll1.insertAtTail(1);
  ll1.insertAtTail(2);
  ll1.insertAtTail(3);
  ll1.insertAtTail(3);
  ll1.insertAtTail(2);
  ll1.insertAtTail(1 );
  ll1.display();
  cout<<isPallindrome(ll1.head)<<endl;
 
  return 0;
}
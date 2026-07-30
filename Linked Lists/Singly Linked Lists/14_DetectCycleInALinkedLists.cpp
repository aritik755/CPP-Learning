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

bool detectCycleInLL(Node* head){
  if(head == NULL) return false;

  Node* slowPtr = head;
  Node* fastPtr = head;
  while(fastPtr && fastPtr->next){
    slowPtr = slowPtr->next;
    fastPtr = fastPtr->next->next;

    if(slowPtr == fastPtr){
      cout<<slowPtr->val<<endl; 
      return true;
    }
  }
  return false;
}

void removeCycleFromLL(Node* &head){
  Node* slow = head;
  Node* fast = head;

  do{
    slow = slow->next;
    fast = fast->next->next;
  }while(slow != fast);

  fast = head;
  while(slow->next != fast->next){
    slow = slow->next;
    fast = fast->next;
  }
  slow->next = NULL;
}

int main(){

  LinkedList ll1;
  ll1.insertAtTail(1);
  ll1.insertAtTail(2);
  ll1.insertAtTail(3);
  ll1.insertAtTail(4);
  ll1.insertAtTail(5);
  ll1.insertAtTail(6);
  ll1.insertAtTail(7);
  ll1.insertAtTail(8);
  // ll1.display();
  ll1.head->next->next->next->next->next->next->next->next = ll1.head->next->next;
  cout<<detectCycleInLL(ll1.head)<<endl;
  removeCycleFromLL(ll1.head);
  cout<<"After removing the cycle:"<<endl;
  cout<<detectCycleInLL(ll1.head)<<endl;
  ll1.display();

  return 0;
}
#include <iostream>
using namespace std;

class Node
{
public:
  int val;
  Node *next;

  Node(int data)
  {
    val = data;
    next = NULL;
  }
};

void insertAtHead(Node *&head, int val)
{
  Node *new_Node = new Node(val);
  new_Node->next = head;
  head = new_Node;
}

void insertAtTail(Node *&head, int val)
{
  Node *new_Node = new Node(val);

  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = new_Node;
}

void insertAtPosition(Node *&head, int val, int pos)
{
  if (pos == 0)
  {
    insertAtHead(head, val);
    return;
  }

  Node *new_Node = new Node(val);
  int currentPosition = 0;
  Node *temp = head;
  while (currentPosition != pos - 1)
  {
    temp = temp->next;
    currentPosition++;
  }
  new_Node->next = temp->next;
  temp->next = new_Node;
}

void updateAtPosition(Node *&head, int val, int k)
{
  Node *temp = head;
  int currentPosition = 0;
  while (currentPosition != k)
  {
    temp = temp->next;
    currentPosition++;
  }
  temp->val = val;
}

void deleteAtHead(Node *&head)
{
  Node *temp = head;
  head = head->next;
  free(temp);
}

void deleteAtTail(Node *&head)
{
  Node *secondLast = head;
  while (secondLast->next->next != NULL)
  {
    secondLast = secondLast->next;
  }
  Node *temp = secondLast->next;
  secondLast->next = NULL;
  free(temp);
}

void deletionAtPosition(Node* &head, int pos){
  if(pos == 0){
    deleteAtHead(head);
    return;
  }
  
  Node* prev = head;
  int currentPosition = 0;
  while(currentPosition != pos-1){
    prev = prev->next;
    currentPosition++;
  }
  prev->next = prev->next->next;
  Node* temp = prev->next;
  free(temp);

}

void display(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

int main()
{

  Node *head = NULL;
  insertAtHead(head, 8);
  display(head);
  insertAtHead(head, 7);
  display(head);
  insertAtHead(head, 6);
  display(head);
  insertAtHead(head, 5);
  display(head);

  insertAtTail(head, 1);
  display(head);
  insertAtTail(head, 2);
  display(head);
  insertAtTail(head, 3);
  display(head);
  insertAtTail(head, 4);
  display(head);

  insertAtPosition(head, 9, 4);
  display(head);

  updateAtPosition(head, 10, 5);
  display(head);

  deleteAtHead(head);
  display(head);

  deleteAtTail(head);
  display(head);

  deletionAtPosition(head, 2);
  display(head);

  return 0;
}
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Node{
  public:
    int val;
    Node* prev;
    Node* next;

    Node(int data){
      val = data;
      prev = NULL;
      next = NULL;
    }
};

class DoublyLinkedList{
  public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
      head = NULL;
      tail = NULL;
    }

    void display(){
      Node* temp = head;
      while(temp != NULL){
        cout<<temp->val<<"<->";
        temp = temp->next;
      }cout<<endl;
    }

    void insertAtEnd(int val){
      Node* new_node = new Node(val);
      if(tail == NULL){
        tail = new_node;
        head = new_node;
        return;
      }

      tail->next = new_node;
      new_node->prev = tail;
      tail = new_node;
      return;
    }
};

bool isCriticalPoints(Node* &currentNode){
  if(currentNode->prev->val < currentNode->val && currentNode->next->val < currentNode->val){ // local maxima
    return true;
  }
  if(currentNode->prev->val > currentNode->val && currentNode->next->val > currentNode->val){ // local minima
    return true;
  }

  return false;
}

vector<int> distanceBetweenCriticalPoints(Node* head, Node* tail){

  vector<int> ans(2, INT_MAX);
  int firstCP = -1, lastCP = -1;

  Node* currNode = tail->prev;
  if(currNode == NULL){
    ans[0] = ans[1] = -1;
    return ans;
  }

  int currPos = 0;
  while(currNode->prev != NULL){
    if(isCriticalPoints(currNode)){
      if(firstCP == -1){
        firstCP = lastCP = currPos;
      }
      else{
        ans[0] = min(ans[0], currPos-lastCP); // min distance
        ans[1] = currPos - lastCP; // max distance
      }
    }
    currPos++;
    currNode = currNode->prev;
  }

  if(ans[0] == INT_MAX){
    ans[0] == ans[1] == -1;
  }
  return ans;
}

int main(){

  DoublyLinkedList dll;
  dll.insertAtEnd(1);
  dll.insertAtEnd(5);
  dll.insertAtEnd(2);
  dll.insertAtEnd(6);
  dll.insertAtEnd(3);
  dll.display();
  vector<int> ans = distanceBetweenCriticalPoints(dll.head, dll.tail);
  cout<<"Minmum Distance: "<<ans[0]<<endl;
  cout<<"Maximum Distance: "<<ans[1]<<endl;
  

  return 0;
}
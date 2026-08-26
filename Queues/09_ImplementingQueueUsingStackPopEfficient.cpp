#include<iostream>
#include<stack>
using namespace std;

class Queue{
  stack<int> st;
  public:
    Queue() {}

    void push(int x){ // queue.enqueue // Time Complexity = O(n)
      stack<int> temp;
      while(!st.empty()){
        temp.push(st.top());
        st.pop();
      }
      st.push(x);
      while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
      }
    }

    void pop(){ // queue.dequeue // Time Complexity = O(1)
      if(st.empty()) return;
      st.pop();
    }

    int front(){ // Time Complexity = O(1)
      if(st.empty()) return INT16_MIN;
      return st.top();

    }

    bool empty(){
      return st.empty();
    }

};

int main(){

  Queue qu;
  qu.push(10); 
  qu.push(20); 
  qu.push(30); 
  qu.push(40);
  qu.pop();
  qu.front();
  qu.empty();
  while(!qu.empty()){
    cout<<qu.front()<<" ";
    qu.pop();
  } 

  return 0;
}
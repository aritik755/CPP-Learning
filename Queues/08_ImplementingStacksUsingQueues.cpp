#include<iostream>
#include<stack>
using namespace std;

class Queue{
  stack<int> st;
  public:
    Queue() {}

    void push(int x){ // queue.enqueue
      st.push(x); // Time Complexity = O(1)
    }

    int pop(){ // queue.dequeue // Time Complexity = O(n)
      if(st.empty()) return -1;
      stack<int> temp;
      while(st.size() > 1){
        temp.push(st.top());
        st.pop();
      }
      st.pop();
      while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
      }
    }

    int front(){ // Time Complexity = O(n)
      if(st.empty()) return -1;
      stack<int> temp;
      while(st.size() > 1){
        temp.push(st.top());
        st.pop();
      }
      int result = st.top();
      while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
      }
      return result;
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
#include<iostream>
#include<vector>
using namespace std;

class Queue {
  int front;
  int back;
  vector<int> v;
  int size;
  int totalSize;
  public:
    Queue(int n){
      v.resize(n);
      totalSize = n;
      front = 0;
      back = n-1;
      size = 0;
    }

    void enqueue(int data){
      if(isFull()) return;
      back = (back + 1) % totalSize;
      v[back] = data;
      size++;
    }

    void dequeue(){
      if(isEmpty()) return;
      front = (front + 1) % totalSize;
      size--;
    }

    int getFront() {
      if(front == -1) return -1;
      return v[front];
    }

    bool isEmpty() {
      return size == 0;
    }

    bool isFull(){
      return size == totalSize;
    }
};

int main(){

  Queue qu(3);
  qu.enqueue(10);
  qu.enqueue(20);
  qu.enqueue(30);
  qu.dequeue();
  qu.enqueue(40);
  qu.dequeue();
  qu.dequeue();
  qu.dequeue();
  qu.enqueue(400);
  qu.enqueue(500);


  while(!qu.isEmpty()){
    cout<<qu.getFront()<<" ";
    qu.dequeue();
  }

  return 0;
}
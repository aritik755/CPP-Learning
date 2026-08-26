#include<iostream>
#include<deque>
using namespace std;
int main(){

  deque<int> dq;
  dq.push_back(10); // Adding Element from the back.
  dq.push_back(20);
  dq.push_back(30);
  dq.push_back(40);
  dq.push_front(5); // Adding Element to the front.
  dq.push_front(0);
  dq.pop_back(); // Removing Element from the back.

  while(!dq.empty()){
    cout<<dq.front()<<" ";
    dq.pop_front(); // Removing the element from the front.
  }

  return 0;
}
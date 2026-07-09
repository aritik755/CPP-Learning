// Friend Function is a non-member function which can access private memeber of the class.

#include<iostream>
using namespace std;

class A{
  int x;
public:
  A(int y){
    x = y;
  }

  friend void print(A &obj); // Now using this void print(A &obj) function can access the private member of the class A.

};

void print(A &obj){
  cout<<obj.x<<endl;
};

int main(){

  A obj(5);
  // cout<<obj.x<<endl; // Error
  print(obj);


  return 0;
}
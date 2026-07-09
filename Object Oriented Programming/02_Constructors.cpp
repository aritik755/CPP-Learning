// Constructors are used to intialize an object.
// This is a function which is called when an object is created.
// Its name is same as class name.
// Types of constructor -> 1.) Default Constructor 2.) Parameterised Constructor 3.) Copy Constructor

#include<iostream>
using namespace std;

class Rectangle{
  public:
  int l;
  int b;

  Rectangle() { // default constructor - no args are passed 
    // initializing the default values 
    l = 0; 
    b = 0;
  }

  Rectangle(int x, int y) { // parameterised constructor - args passed
    l = x;
    b = y;
  }

  Rectangle(Rectangle& r) { // copy constructor - initializing an object by another exisiting object
    l = r.l;
    b = r.b;
  }
};

int main(){

  Rectangle r1;
  cout<<r1.l<<" "<<r1.b<<endl;

  Rectangle r2(5,6);
  cout<<r2.l<<" "<<r2.b<<endl;

  Rectangle r3 = r2; // creating copy of r2 in r3.
  cout<<r3.l<<" "<<r3.b<<endl;

  return 0;
}
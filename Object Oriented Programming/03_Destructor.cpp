// Destructor is called when an object is deleted.
// You cannot pass any parameters in a destructor.
// Name of destructor - ~(class_name)

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

  ~Rectangle() { // Destructor
    cout<<"Destructor is called."<<endl;
  }
};

int main(){

  Rectangle *r1 = new Rectangle();
  cout<<r1->l<<" "<<r1->b<<endl;
  delete r1;

  // Destructor is called.

  Rectangle r2(5,6);
  cout<<r2.l<<" "<<r2.b<<endl;

  Rectangle r3 = r2; // creating copy of r2 in r3.
  cout<<r3.l<<" "<<r3.b<<endl;

  // Destructor is called.
  // Destructor is called.

  return 0;
}
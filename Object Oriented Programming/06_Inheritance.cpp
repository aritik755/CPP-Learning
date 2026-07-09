// Inheritance means a class inherits the properties of another class.
// For eg: If class B inherits the properties of class A.
// So here Class A is Parent/Super Class and Class B is Child/Sub class.

// Access Specifiers:
// 1. public 2. private 3. protected
// 1.) public: Data can be accessed from anywhere in the code.
// 2.) protected: Accessible only in own class, parent class, and derived/child class.
// 3.) private(default): Accessible only in own class.


#include<iostream>
using namespace std;

class Parent{

  public:
    int x;

  protected:
    int y;

  private:
    int z;
};

class Child1 : public Parent{ // Here Child1 is publically inheriting the properties of parent class.
  // x will remain public.
  // y will remain protected.
  // z will not pe accessible beacuse it is only accessible in parent class.
};

class Child2 : private Parent{ // Here Child2 is privately inheriting the properties of parent class.
  // x will remain private.
  // y will remain private.
  // z will not pe accessible beacuse it is only accessible in parent class.
};

class Child3 : protected Parent{ 
  // x will remain protected.
  // y will remain protected.
  // z will not pe accessible beacuse it is only accessible in parent class.
};

int main(){

  Parent p;
  p.x;

  return 0;
}

// Polymorphism is ability of objects/ methods to take different forms.
// Types of Polymorphism:-

// 1.) Compile-Time Polymorphism :- Resolves at compile time.
// --> Function Overloading define a number of functions with same function_name but they perfom differnetly according to the arguments passed.
// --> Operator Overloading

// 2.) Run-Time Polymorphism :- Resolves at runtime.
// --> Function Overriding is when child class defines a function of parent class.

#include<iostream>
using namespace std;

// Compile Time Polymorphism

// Function Overloading
class Sum{ 

  public:
    void add(int x, int y){
      int sum = x + y;
      cout<<sum<<endl;
    }

    void add(int x, int y, int z){
      int sum = x + y + z;
      cout<<sum<<endl;
    }

    void add(float x, float y){
      float sum = x + y;
      cout<<sum<<endl;
    }
};

// Operator Overloading
class Complex { 

  public:
    int real;
    int img;

    Complex(int x, int y){
      real = x;
      img = y;
    }

    Complex operator+ (Complex &c2){
      Complex ans(0,0);
      ans.real = real + c2.real;
      ans.img = img + c2.img;
      return ans;
    }
};


// Runtime Polymorphism

// Function Overriding
class Parent { 
  public:
    virtual void print(){ // Virtual is used to decide which function to call at runtime.
      cout<<"Parent Class"<<endl;
    }
    void show(){
      cout<<"Parent Class"<<endl;
    }
};

class Child: public Parent{
  public:
    void print(){
      cout<<"Child Class"<<endl;
    }
    void show(){
      cout<<"Child Class"<<endl;
    }
};

int main(){

  // Compile Time Polymorphism

  // Function Overloading
  Sum s;
  s.add(4, 5);
  s.add(3, 7, 8);
  s.add(float(4.5), float(7.7));

  // Operator Overloading
  Complex c1(1,2);
  Complex c2(1,3);

  Complex c3 = c1 + c2;
  cout<<c3.real<<" + i"<<c3.img<<endl;

  
  // Runtime Polymorphism

  // Function Overriding
  Parent *p;
  Child c;

  p = &c; // Here we have parent with child at runtime.
  p->print(); // Only print is affected because of virtual keyword.
  p->show();

  return 0; 
}
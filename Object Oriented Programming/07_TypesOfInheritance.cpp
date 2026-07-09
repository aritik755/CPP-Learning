// Types of Inheritance:-
// 1.) Single Inheritance :- One class inheriting the property of another class.(Class B is inheriting the properties of Class A.)
// 2.) Multi-Level Inheritance :- Parent class is derived from another class.(Class C is inherting the propertie of Class B and Class B is inheriting the properties of Class A).
// 3.) Multiple Inheritance :- A single child class have multiple parent class (Class C has Class B and Class A as Parent Class.)
// 4.) Hierarchical Inheritance :- Single Parent class and multiple child class.(Class B and Class C is inheriting the properties of Class A.)
// 5.) Hybird Inheritance :- Combination of more than one inheritance types. (Class B and Class C is inheriting the properties of Class A and Class D is inheriting properties of Class C.)

#include<iostream>
using namespace std;

class Parent{
  public:
    Parent(){
      cout<<"Parent Class"<<endl;
    }
};

class Parent1{
  public:
    Parent1(){
      cout<<"Parent1 Class"<<endl;
    }
};

class Parent2{
  public:
    Parent2(){
      cout<<"Parent2 Class"<<endl;
    }
};

class Parent3{
  public:
    Parent3(){
      cout<<"Parent3 Class"<<endl;
    }
};

class Child: public Parent{
  public:
      Child(){
        cout<<"Child Class"<<endl;
      }
};

class Child1: public Parent1, public Parent2{
  public:
      Child1(){
        cout<<"Child1 Class"<<endl;
      }
};

class Child3: public Parent3{
  public:
      Child3(){
        cout<<"Child3 Class"<<endl;
      }
};

class Child4: public Parent3{
  public:
      Child4(){
        cout<<"Child4 Class"<<endl;
      }
};

class GrandChild: public Child{
  public:
    GrandChild(){
      cout<<"GrandChild Class"<<endl;
    }
};

int main(){

  Child c; // Single Inheritance

  GrandChild Gc; // MultiLevel Inheritance

  Child1 c1; // Multiple Inheritance

  Child3 c3; // Hierarchical Inheritance
  Child4 c4; // Hierarchical Inheritance
  
  return 0;
}
// Encapsulation is defined as the binding of methods and variables in a single unit(class).
// How? -> Data is only accessible only from class methods.
// It also leads to data abstraction/hiding.
// Class -> Abstract data type(ADT). 

#include<iostream>
using namespace std;

class ABC{

  int x;

  public: 

  void set(int n){
    x = n;
  }

  int get(){
    return x;
  }
};

int main(){

  ABC obj1;
  obj1.set(3);
  cout<<obj1.get()<<endl;

  return 0;
}
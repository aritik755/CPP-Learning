// OOPS:-
// Main focus on data
// Bind the data to the function using it.
// Program is divided into objects(data and functions)
// Protect data from accidental changes.

// Class:-
// Fundamental unit of OOPS.
// User defined data types.

// Objects:-
// Objects are variables of type class.

#include <iostream>
using namespace std;

// class class_name{
//   // defining the properties
//   int data1; // datatype property_name;
//   int data;
// };

class Fruit
{
public:
  string name;
  string color;
};

int main()
{

  Fruit apple; // First Method to define the object
  apple.name = "Apple";
  apple.color = "Red";
  cout << apple.name << " - " << apple.color << endl;

  Fruit *mango = new Fruit(); // Second Method to define the object(using pointers)
  mango->name = "Mango";
  mango->color = "Yellow";
  cout << mango->name << " - " << mango->color << endl;

  return 0;
}
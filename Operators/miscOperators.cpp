#include<iostream>
using namespace std;
int main(){
  int a = 4;
  cout<<sizeof(a)<<endl; // Space occupied by a data type 

  char name = 'name';
  cout<<sizeof(name)<<endl; // Space occupied by a data type

  bool flag;
  a=name? flag = true : flag= false; // Ternary Operator condition ? value_if_true : value_if_false;
  cout<<flag<<endl;

  cout<<(&a)<<endl; // Address of the variable 

  int c = 6;
  cout<<(c++)<<endl; // Print the same value and increase it after.
  cout<<(++c)<<endl; // Print the increment or ordered value first
  int b = c+5;
  cout<<(b)<<endl;
  return 0;
}
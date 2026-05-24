#include<iostream>
using namespace std;
int main(){
  bool exp1 = true;
  bool exp2 = false;

  cout<<(exp1 && exp2)<<endl; // Comparing both using their true and false state TRUE IF BOTH ARE TRUE(AND OPERATOR) 
  cout<<(exp1 || exp2)<<endl; // Comparing both using their true and false state TURE IF A SINGLE EXPRESSION IS TRUE (OR OPERATOR)
  cout<<(!exp1)<<endl; // Reverse ture to false and false to ture 
  return 0;
}
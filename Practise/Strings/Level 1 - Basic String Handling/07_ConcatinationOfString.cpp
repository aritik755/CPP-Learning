#include<iostream>
using namespace std;
int main(){

  string s1;
  cout<<"Enter the First String: ";
  getline(cin , s1);
  
  string s2;
  cout<<"Enter the Second String: ";
  getline(cin , s2);

  cout<<s1+s2<<endl;

  return 0;
}
#include<iostream>
#include<cstring>
using namespace std;
int main(){

  string s;
  cout<<"Enter a string: ";
  cin>>s;

  cout<<"First Character of given string: "<<s[0]<<endl;
  cout<<"Last Character of given string: "<<s[s.length() - 1]<<endl;

  return 0;
}
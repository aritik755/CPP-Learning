#include<iostream>
#include<cstring>
using namespace std;
int main(){

  string s;
  cout<<"Enter a string: ";
  getline(cin, s);

  if(s.size() == 0){
    cout<<"String is empty."<<endl;
  }
  else{
    cout<<"String is not empty.";
  }

  return 0;
}
#include<iostream>
#include<cstring>
using namespace std;
int main(){

  string s;
  cout<<"Enter a string: ";
  getline(cin, s);

  int count = 0;
  for(int i = 0; i < s.size(); i++){
    if(s[i] != ' '){
      count++;
    }
  }

  cout<<count<<endl;

  return 0;
}
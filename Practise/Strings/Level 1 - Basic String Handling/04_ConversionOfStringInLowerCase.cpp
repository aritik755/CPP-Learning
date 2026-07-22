#include<iostream>
#include<cstring>
using namespace std;
int main(){

  string s;
  cout<<"Enter a string :";
  cin>>s;

  for(int i = 0; i < s.size(); i++){
    s[i] = tolower(s[i]);
  }

  cout<<s<<endl;

  return 0;
}
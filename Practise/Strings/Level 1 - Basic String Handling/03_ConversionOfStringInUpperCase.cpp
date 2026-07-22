#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){

  string s;
  cout<<"Enter a string: ";
  cin>>s;

  for(int i = 0; i < s.length(); i++){
    s[i] = toupper(s[i]);
  }

  cout<<s<<endl;

  return 0;
}
#include<iostream>
#include<cstring>
using namespace std;
int main(){

  string s;
  cout<<"Enter a string: ";
  cin>>s;

  for(int i = 0; i < s.size(); i++){
    cout<<s[i]<<" = "<<(int)s[i]<<endl;
  }

  return 0;
}

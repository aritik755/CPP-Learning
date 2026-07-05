#include<iostream>
#include<cstring>
using namespace std;
int main(){

  // string str = "college"; // Way 1 to define a string.

  // string str1("wallah"); // Way 2 to define a string.

  // cout<<str<<" "<<str1<<endl;

  string str;
  // cin>>str; // input of a string.
  getline(cin,str); // Take input after the space between words.

  cout<<str<<endl;


  return 0;
}
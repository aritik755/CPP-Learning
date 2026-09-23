// Values are stored in unordered fashion in unordered set.
// Unqiue values, values will be identified by itself, values cannot modified inside set.
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){

  unordered_set<int> s1;

  s1.insert(3);
  s1.insert(1);
  s1.insert(2);
  s1.insert(1);

  for(auto value:s1){
    cout<<value<<" ";
  }

  return 0;
}
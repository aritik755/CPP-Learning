// It can store duplicate values.
// Ordered(Ascending or Descending).
// Value will be identified by itself.
// Value cannot be modified in multiset.
#include<iostream>
#include<set>
using namespace std;
int main(){

  multiset<int> ms;

  ms.insert(1);
  ms.insert(3);
  ms.insert(2);
  ms.insert(3);

  for(auto value:ms){
    cout<<value<<" ";
  }

  return 0;
}
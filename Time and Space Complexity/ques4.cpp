#include<iostream>
using namespace std;
int main(){
  
  int n = 6;

  for(int i = 0; i < n; i++){ // In this loop its running 'n' times.
    for(int j = 0; j < n; j++){ // Similarly in this loop its running 'n' times.
      cout<<"*"<<" ";
    }
    cout<<endl;
  }

  // So the total loop is running nxn = n^2 times.
  // The time complexity of this code is O(n^2).

  return 0;
}
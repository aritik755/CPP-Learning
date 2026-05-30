#include<iostream>
using namespace std;
int main(){

  int array[] = {1,2,3,4,5,6,7,8,9};
  int n = 9;

  for(int i = 0; i < n; i++){
    cout<<array[i]<<"\n"<<endl; // O(n) linear growth time complexity.
  }

  return 0;
}
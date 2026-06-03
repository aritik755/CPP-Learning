#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  cout<<"Odd Numbers between 1 to given input: ";
  for(int i = 0; i < n; i++){
    if(i % 2 != 0){
      cout<<i<<"\n";
    }
  }

  return 0;
}
#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the no of terms to print: ";
  cin>>n;

  cout<<"Numbers from 1 to given input are: "<<"\n";
  for(int i = 1; i <= n; i++){
    cout<<i<<endl;
  }

  return 0;
}
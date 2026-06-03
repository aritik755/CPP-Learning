#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the no of terms to print: ";
  cin>>n;

  cout<<"Numbers to print in reverse order: "<<"\n";
  for(int i = n; i >= 1; i--){
    cout<<i<<endl;
  }

  return 0;
}
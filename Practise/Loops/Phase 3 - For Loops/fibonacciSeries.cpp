#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  if(n == 1){
    cout<<"The Fibonacci Series upto the given terms: "<<"\n"<<0;
  }
  else if(n == 0){
    cout<<"Invalid Input";
  }
  else{
    int a = 0;
    int b = 1;
    cout<<"The Fibonacci Series upto the given terms: "<<"\n";
    cout<<a<<" "<<b<<" ";
    for(int i = 1; i <= n-2; i++){
      int next = a + b;
      cout<<next<<" ";
      a = b;
      b = next;
    }
  }

 

  return 0;
}
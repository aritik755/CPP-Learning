#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms in the series: ";
  cin>>n;

  int i = 0;
  int a = 0;
  int b = 1;
  cout<<"Fibonacci Series upto given terms: ";
  cout<<a<<" "<<b<<" ";
  while(i < n-2){
    
    int next = a + b;
    a = b;
    b = next;
    
    cout<<next<<" ";

    i++;
  } 

  return 0;
}

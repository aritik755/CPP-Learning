#include<iostream>
using namespace std;
void f(int n){
  if(n < 1) return;
  f(n-1);
  cout<<n<<" "; 
}

int main(){

  int n;
  cout<<"Enter the Number of Terms: ";
  cin>>n;

  cout<<"Terms from 1 to "<<n<<" are:"<<endl;
  f(n);

  return 0;
}
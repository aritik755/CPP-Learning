#include<iostream>
using namespace std;

void f(int n, int k){
  if(k == 0) return;

  f(n, k-1);
  cout<<(n * k)<<" ";
}

int main(){

  int n;
  cout<<"Enter a Number: ";
  cin>>n;

  int k;
  cout<<"Enter the value of k(No. of Multiples): ";
  cin>>k;

  cout<<k<<" multiples of "<<n<<" are: "<<endl;
  f(n,k);

  return 0;
}
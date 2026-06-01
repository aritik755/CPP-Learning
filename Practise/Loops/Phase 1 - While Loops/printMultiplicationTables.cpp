#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the value of n: ";
  cin>>n;

  int multiplication;
  int i = 1;
  cout<<"Table of given input:\n";
  while(i <= 10){
    multiplication = (n * i);
    cout<<n<<" X "<<i <<" = " <<multiplication<<"\n";
  i++;
  }
  cout<<endl;

  return 0;
}
#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms of the series: ";
  cin>>n;

  int i = 0;
  int a = 0;
  int b = 1;
  cout<<"The Fibonaaci Series upto given terms are: "<<"\n";
  cout<<a<<" "<<b<<" ";
  do{
    int next = a + b;
    a = b;
    b = next;

    cout<<next<<" ";
    i++; 
  }while(i < n-2);

  return 0;
}
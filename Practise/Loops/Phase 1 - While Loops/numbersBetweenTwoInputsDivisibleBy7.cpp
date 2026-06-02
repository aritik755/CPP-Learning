#include<iostream>
using namespace std;
int main(){

  int a, b;
  cout<<"Enter the values of a and b: ";
  cin>>a>>b;

  int i = a;
  cout<<"The numbers between a and b divisible by 7:"<<"\n";
  while(i <= b){
    if(i % 7 == 0){
      cout<<i<<"\n";
    }
    i++;
  }


  return 0;
}
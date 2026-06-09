#include<iostream>
using namespace std;
int main(){

  int x, y;
  cout<<"Enter the value of x and y: ";
  cin>>x>>y;

  int *ptrx = &x;
  int *ptry = &y;

  int result;

  int *ptrResult = &result;

  *ptrResult = *ptrx + *ptry;

  cout<<result<<" "<<*ptrResult<<endl;
  
  return 0;
}
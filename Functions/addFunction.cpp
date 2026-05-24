#include<iostream>
using namespace std;

int add(int num1 , int num2){
  int sum = num1 + num2;
  return sum;
}

int add(int num1 , int num2, int num3){
  int sum = num1 + num2 + num3;
  return sum;
}

float add(float num1 , float num2){
  float sum = num1 + num2;
  return sum;
}
int main(){
  int a, b, c;
  cout<<"Enter first number: ";
  cin>>a;
  cout<<"Enter second number: ";
  cin>>b;
  cout<<"Enter third number: ";
  cin>>c;

  add(a,b);
  
  add(a,b,c);
  
  cout<<"Sum of a and b: "<<add(a,b)<<endl;
  
  cout<<"Sum of a,b and c: "<<add(a,b,c)<<endl;

  float e, f;
  cout<<"Enter first number: ";
  cin>>e;
  cout<<"Enter second number: ";
  cin>>f;

  add(e,f);

  cout<<"Sum of e and f: "<<add(e,f)<<endl;

  return 0;
}
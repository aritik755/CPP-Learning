#include<iostream>
using namespace std;
int gcd(int a, int b){
  if(b > a) return gcd(b,a);  
  if(b == 0) return a;
  return gcd(b , a%b);
}

int main(){

  int x, y;
  cout<<"Enter the numbers x and y: ";
  cin>>x>>y;

  cout<<"Greatest Common Divisor of "<<x<<" and "<<y<<" is: "<<gcd(x,y);

  return 0;
}
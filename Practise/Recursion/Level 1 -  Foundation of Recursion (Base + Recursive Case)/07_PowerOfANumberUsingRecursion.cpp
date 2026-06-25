// 7. Calculate power of a number (xⁿ) using recursion.
#include<iostream>
using namespace std;

int powerOfTheNumber(int x, int n){
  if(n == 0) return 1;

  return x*powerOfTheNumber(x, n-1);
}

int main(){

  int x, n;
  cout<<"Enter the number and its power: ";
  cin>>x>>n;

  cout<<x<<"^"<<n<<":"<<powerOfTheNumber(x,n)<<endl;

  return 0;
}
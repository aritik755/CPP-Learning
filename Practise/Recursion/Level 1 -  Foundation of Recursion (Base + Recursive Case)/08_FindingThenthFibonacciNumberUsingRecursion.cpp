// 8. Find nth Fibonacci number recursively.
#include<iostream>
using namespace std;

int fibonacciTerm(int n){
  if (n <= 1) return n;

  return fibonacciTerm(n-1) + fibonacciTerm(n-2);
}

int main(){

  int n;
  cout<<"Enter the nth term: ";
  cin>>n;

  cout<<n<<"th term of fibonacci series is: "<<fibonacciTerm(n)<<endl;

  return 0;
}
// 5. Print sum of first n natural numbers recursively.
#include<iostream>
using namespace std;

int sumOfNumbers(int n){

  if(n == 0) return 0;

  return n + sumOfNumbers(n-1);
}

int main(){

  int n;
  cout<<"Enter the value of n: ";
  cin>>n;

  cout<<"Sum Numbers from 1 to "<<n<<" :"<<sumOfNumbers(n)<<endl;

  return 0;
}
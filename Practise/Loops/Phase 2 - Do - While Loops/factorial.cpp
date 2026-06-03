#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter a number: ";
  cin>>n;

  int factorial = 1;
  int i = 1;
  do{
    factorial *= i;
    i++ ;
  }while(i <= n);

  cout<<"The Factorial of "<<n<<": "<<factorial<<endl;

  return 0;
}
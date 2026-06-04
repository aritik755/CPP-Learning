#include<iostream>
#include<cmath>
using namespace std;

int factorial(int n){
  int factorial = 1;
  for(int i = 1; i <= n; i++){
    factorial *= i;
  }
  return factorial;
}

int main(){

  int n;
  cout<<"Enter the number: ";
  cin>>n;

  int originalNumber = n;
  
  int sum = 0;
  while(n > 0){
    int lastDigit = n % 10;
    sum += factorial(lastDigit);
    n /= 10;
  } 

  if(sum == originalNumber){
    cout<<"The number "<<originalNumber<<" is a strong number."<<endl;
  }
  else{
    cout<<"The number "<<originalNumber<<" is not a strong number."<<endl;
  }

  return 0;
}
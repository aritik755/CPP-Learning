#include<iostream>
using namespace std;

int power(int num1, int num2){
  if(num2 == 0) return 1;
  if(num2 % 2 == 0){
    int result = power(num1 , num2/2);
    return result*result;
  }
  else{
    int result = power(num1 , (num2-1)/2);
    return num1*result*result;
  }
}

int f(int n, int d){
  if(n == 0) return 0;
  return power((n % 10), d) + f(n/10, d);
}

int main(){

  int n;
  cout<<"Enter a number: ";
  cin>>n;

  int d = 0;
  int temp = n;
  while(temp > 0){
    temp = temp / 10;
    d++;
  }

  int result = f(n,d);
  if(result == n){
    cout<<"Yes given number is a armstrong number."<<endl;
  }
  else{
    cout<<"No, given number is not a armstrong number."<<endl;
  }

  return 0;
}
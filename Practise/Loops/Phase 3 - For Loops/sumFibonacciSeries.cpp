#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  if(n == 0){
    cout<<"Invalid Input";
  }
  else if(n == 1){
    cout<<"The sum of Fibonacci Series upto the given terms: "<<0;
  }
  else{
    int a = 0;
    int b = 1;
    int sum = 1;
    for(int i = 1; i <= n-2; i++){
      int next = a + b;
      sum += next;
      a = b;
      b = next;
    }
    cout<<"The sum of Fibonacci Series upto the given terms: "<<sum;
  }
 

  return 0;
}
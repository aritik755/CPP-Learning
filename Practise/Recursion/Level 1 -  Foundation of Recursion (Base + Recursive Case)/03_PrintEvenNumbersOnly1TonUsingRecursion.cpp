// 3. Print only even numbers from 1 to n recursively.
#include<iostream>
using namespace std;

void printEvenNumbers(int n){
  if(n == 0) return; // base case

  printEvenNumbers(n-1); // recursive call

  if(n % 2 == 0){
    cout<<n<<" ";
  }
}

int main(){

  int n;
  cout<<"Enter the value of n: ";
  cin>>n;

  cout<<"Even Numbers between 1 to "<<n<<" :"<<endl;
  printEvenNumbers(n); 

  return 0;
}
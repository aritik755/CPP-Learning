// 1. Print numbers from 1 to n using recursion.
#include<iostream>
using namespace std;

void printNumbers(int n){

  if(n == 0) return; // Base case

  printNumbers(n-1); // Recursive call
  cout<<n<<" "; // Print the numbers 
}

int main(){

  int n;
  cout<<"Enter the number of terms to print: ";
  cin>>n;

  cout<<"Numbers between 1 to "<<n<<" are:"<<endl;
  printNumbers(n);

  return 0;
}
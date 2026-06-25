// 4. Print only odd numbers from 1 to n recursively.
#include<iostream>
using namespace std;

void printOddNumbers(int n){
  if(n == 0) return; // base case

  printOddNumbers(n-1); // recursive call

  if(n % 2 != 0){
    cout<<n<<" ";
  }
}

int main(){

  int n;
  cout<<"Enter the value of n: ";
  cin>>n;

  cout<<"Odd Numbers between 1 to "<<n<<" :"<<endl;
  printOddNumbers(n); 

  return 0;
}
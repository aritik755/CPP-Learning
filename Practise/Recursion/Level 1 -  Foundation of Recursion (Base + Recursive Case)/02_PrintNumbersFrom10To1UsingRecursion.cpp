// 2. Print numbers from n down to 1 using recursion.
#include<iostream>
using namespace std;

void printReverseNumbers(int n){
  
  if(n == 0) return; // Base case

  cout<<n<<" "; // Print the numbers
  printReverseNumbers(n-1); // Recursive call
 
}

int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  cout<<"Numbers between "<<n<<" to 1 are:"<<endl;
  printReverseNumbers(n);

  return 0;
}
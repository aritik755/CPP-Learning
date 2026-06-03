#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter a number: ";
  cin>>n;

  int originalNumber = n;

  int reverseNumber = 0;
  do{
    int lastdigit = n % 10;
    reverseNumber = reverseNumber*10 + lastdigit;
    n /= 10;
  }while(n > 0);

  if(originalNumber == reverseNumber){
    cout<<"The given number is a palindrome number."<<endl;
  }
  else{
    cout<<"The given number is not a palindrome number."<<endl;
  }

  return 0;
}
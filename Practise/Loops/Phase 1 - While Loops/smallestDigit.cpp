#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter a number: ";
  cin>>n;

 

  int smallestDigit = 9;
  if(n == 0){
    cout<<"Smallest Digit:"<<0<<endl;
  }
  else{while(n > 0){
  
  int digit = n % 10;
  
  if(smallestDigit > digit){
    smallestDigit = digit;
  }
  n /= 10;
  }
  cout<<"Smallest Digit: "<<smallestDigit<<endl;
}

  

  return 0;
}
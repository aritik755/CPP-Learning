#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter a Number: ";
  cin>>n;

  int sumEven = 0;
  int sumOdd = 0;
  do{
    int lastdigit = n % 10;
    if(lastdigit % 2 == 0){
      sumEven += lastdigit;
    }
    else{
      sumOdd += lastdigit;
    }
  n /= 10;
  }while(n > 0);

  cout<<"Sum of Even Digits in the number: "<<sumEven<<endl;
  cout<<"Sum of Odd Digits in the number: "<<sumOdd<<endl;

  return 0;
}
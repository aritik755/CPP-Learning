#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter a number: ";
  cin>>n;

    int count = 0;
    int i = 1;
    while(i <= n){
      if(n % i == 0){
        count++;
      }
      i++;
    }
    if(count == 2){
      cout<<"The given number is a prime number."<<endl;
    }
    else{
      cout<<"The given number is not a prime number."<<endl;
    }
  
  return 0;

}
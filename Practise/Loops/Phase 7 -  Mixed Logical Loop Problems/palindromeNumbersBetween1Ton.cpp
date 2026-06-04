#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  

  cout<<"Palindrome Numbers between 1 to "<<n<<" are:"<<endl;
  for(int i = 1; i <= n; i++){
    
    int num = i;
    int reverseNumber = 0;
   
    while (num > 0){
    int lastDigit = num % 10;
    reverseNumber = reverseNumber*10 + lastDigit;
    num /= 10;
  }

    if(reverseNumber == i){
      cout<<i<<endl;
    }
  }  

  return 0;
}
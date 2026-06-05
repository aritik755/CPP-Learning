#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  int maxSum = 0;
  int maxNum = 0;
  for(int i = 1; i <= n; i++){
    int num = i;
    int sum = 0;
    
    while(num > 0){
      int lastDigit = num % 10;
      sum += lastDigit;
      num /= 10;
    }

    if(sum > maxSum){
      maxSum = sum;
      maxNum = i;
    }
  }

  cout << "Number with maximum digit sum: " << maxNum << endl;
  cout << "Digit sum: " << maxSum << endl;

  return 0;
}
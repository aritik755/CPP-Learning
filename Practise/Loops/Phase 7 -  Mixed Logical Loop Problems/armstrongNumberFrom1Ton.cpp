#include<iostream>
using namespace std;

int power(int base, int exp){
  int result = 1;
  for(int i = 0; i < exp; i++){
    result *= base;
  }
  return result;
}

int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  cout<<"Armstrong Numbers between 1 to "<<n<<" are: "<<endl;
  for(int i = 1; i <= n; i++){
    int num = i;
    int digits = 0;

    while(num > 0){
      digits++;
      num /= 10;
    }
    
    num = i;
    int sum = 0;
    while(num > 0){
      int lastDigit = num % 10;
      sum += power(lastDigit, digits);
      num /= 10;
    }

    if(sum == i){
      cout<<i<<endl;
    }
  }

  return 0;
}
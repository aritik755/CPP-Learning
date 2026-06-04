#include<iostream>
using namespace std;

int factorial(int n){
  int factorial = 1;
  for(int i = 1; i <= n; i++){
    factorial *= i;
  }
  return factorial;
}

int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  int sum = 0;
  for(int i = 1; i <= n; i++){
    sum += factorial(i);
  }

  cout<<"Sum of the factorial series for "<<n<<" terms: "<<sum<<endl;

  return 0;
}
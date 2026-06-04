#include<iostream>
#include<cmath>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  int x ;
  cout<<"Enter the value of x: ";
  cin>>x;

  int sum = 0;
  for(int i = 0; i < n; i++){
    sum += pow(x,i);
  }

  cout << "Sum of 1 + x + x^2 + ... + x^" << n << " = " << sum << endl;

  return 0;
}
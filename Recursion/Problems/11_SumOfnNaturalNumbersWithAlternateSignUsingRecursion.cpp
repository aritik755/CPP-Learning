#include<iostream>
using namespace std;
int f(int n){
  if(n == 0) return 0;

  return f(n - 1) + ((n % 2 == 0) ? (-n) : (n));
}

int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  cout<<"Sum of "<<n<<" numbers with alternate sign are: "<<f(n)<<endl;

  return 0;
}
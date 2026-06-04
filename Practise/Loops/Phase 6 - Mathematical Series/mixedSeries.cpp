#include<iostream>
#include<cmath>
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

  int x ;
  cout<<"Enter the value of x: ";
  cin>>x;

  double sum = 0;
  for(int i = 1; i <= n; i++){
    double powerToThe1 = pow((-1),(i-1));
    double xTerm = pow(x,i);
    double fact = factorial(i);
    double nthTerm = powerToThe1*(xTerm/fact);
    sum += nthTerm;
  }

  cout<<"The sum of factorial series for 1 to "<<n<<"th term: "<<sum<<endl;

  return 0;
}

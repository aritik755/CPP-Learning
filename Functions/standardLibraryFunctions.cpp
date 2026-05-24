#include<iostream>
#include<cmath>>
using namespace std;
int main(){
  int a, b;
  cout<<"Enter the value of a: ";
  cin>>a;
  cout<<"Enter the value of b: ";
  cin>>b;

  pow(a,b); // a^b
  sqrt(a); // Square root of a 
  sqrt(b); // Square root of b

  cout<<"Value of a^b: "<<pow(a,b)<<endl;
  cout<<"Value of root a: "<<sqrt(a)<<endl;
  cout<<"Value of root b: "<<sqrt(b)<<endl;

  int ans = sqrt(a);
  cout<<ans<<endl;
  
  double doubleans = sqrt(b);
  cout<<doubleans<<endl;
  return 0;
}
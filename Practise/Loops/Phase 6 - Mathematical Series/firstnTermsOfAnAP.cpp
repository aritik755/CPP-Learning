#include<iostream>
using namespace std;
int main(){

  int n,a,d;
  cout<<"Enter the number of terms(n): ";
  cin>>n;
  cout<<"Enter the first term of the A.P.(a): ";
  cin>>a;
  cout<<"Enter the common difference(d): ";
  cin>>d;

  cout<<"A.P. for the given constraints: "<<"\n";
  for (int i = 1; i <= n; i++){
    int nthTerm = a + (i-1)*d; 
    cout<<nthTerm<<" ";
  }
  
  return 0;
}
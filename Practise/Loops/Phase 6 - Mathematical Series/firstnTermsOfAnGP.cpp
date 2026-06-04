#include<iostream>
#include<cmath>
using namespace std;
int main(){

  int n,a,r;
  cout<<"Enter the number of terms(n): ";
  cin>>n;
  cout<<"Enter the first term of the A.P.(a): ";
  cin>>a;
  cout<<"Enter the common common ratio(r): ";
  cin>>r;

  cout<<"G.P. for the given constraints: "<<"\n";
  for (int i = 0; i < n; i++){
    int nthTerm = a*(pow(r,i)); 
    cout<<nthTerm<<" ";
  }
  
  return 0;
}
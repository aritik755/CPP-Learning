#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  int a = 0;
  int b = 1;
  cout<<"Fibonacci series for "<<n<<" terms: "<<"\n";
  for(int i = 1; i <= n; i++){
    int next = a + b;
    cout<<a<<" ";
    a = b;
    b = next; 
    
  }

  return 0;
}
#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  int a = 0;
  int b = 1;
  int sum = 1;

  if(n == 0){
    cout<<"Invalid Input";
  }
  else if(n == 1){
    cout<<"Sum of Fibonacci series for "<<n<<" terms: "<<0<<"\n";
  }
  else{
    for(int i = 1; i <= n-2; i++){
    int next = a + b;
    sum += next;
    a = b;
    b = next; 
  }

    cout<<"Sum of Fibonacci series for "<<n<<" terms: "<<sum<<"\n";
  }
  
  

  return 0;
}
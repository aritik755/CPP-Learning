#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  int i = 1;
  int a = 0;
  int b = 1;
  int sum = 1;
 
  while(i <= n-2){
    int next = a + b;
    sum += next;
    a = b;
    b = next;
    i++;
  }
  if(n == 0){
    cout<<"The sum of Fibonaaci Series upto the given terms: "<<"0"<<endl;
  }
  else if(n == 1){
    cout<<"The sum of Fibonaaci Series upto the given terms: "<<"1"<<endl;
  }
  else{
    cout<<"The sum of Fibonaaci Series upto the given terms: "<<sum<<endl;
  }

  return 0;
}
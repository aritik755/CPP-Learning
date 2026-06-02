#include<iostream>
using namespace std;
int main(){

  int n, m;
  cout<<"Enter the values of n and m: ";
  cin>>n>>m;

  int minNum;
  if(n > m){
    minNum = n;
  }
  else{
    minNum = m;
  }

  int i = 1;
  int hcf = 0;
  while(i <= minNum){
    if(n % i == 0 && m % i ==0){
      hcf = i;
    }
    i++;
  }

  int lcm = (n*m)/hcf;

  cout<<"Least Common Factor of n and m: "<<lcm<<endl;
  return 0;
}
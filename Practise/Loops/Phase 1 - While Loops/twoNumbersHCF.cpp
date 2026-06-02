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

  cout<<"Highest Common Factor of n and m: "<<hcf<<endl;
  return 0;
}
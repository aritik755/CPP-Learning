#include<iostream>
using namespace std;
int main(){

  int n, m;
  cout<<"Enter two numbers to find the LCM: ";
  cin>>n>>m;

  int numMin;
  if(n > m){
    numMin = m; 
  }
  else{
    numMin = n;
  }
  
  int HCF;
  for(int i = 1; i <= numMin; i++){
    if(n % i == 0 && m % i == 0){
      HCF = i;
    }
  }


  int LCM;
  LCM = (n*m)/HCF;

  cout<<"LCM of the given numbers: "<<LCM<<endl;



  return 0;
}
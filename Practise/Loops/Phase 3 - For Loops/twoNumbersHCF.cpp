#include<iostream>
using namespace std;
int main(){

  int n, m;
  cout<<"Enter two numbers to find the HCF: ";
  cin>>n>>m;

  int numMin;
  if(n > m){
    m = numMin; 
  }
  else{
    n = numMin;
  }
  
  int HCF;
  for(int i = 1; i <= numMin; i++){
    if(n % i == 0 && m % i == 0){
      HCF = i;
    }
  }

  cout<<"HCF of the given numbers: "<<HCF<<endl;



  return 0;
}
#include<iostream>
using namespace std;
int main(){

  int n,m;
  cout<<"Enter two numbers to find their HCF: ";
  cin>>n>>m;

  int minNum;
  if(n > m){
    minNum = m;
  }
  else{
    minNum = n;
  }

  int i = 1;
  int HCF = 0;
  do{
    if(n % i == 0 && m % i ==0){
      HCF = i;
    }
    i++;
  }while(i <= minNum);

  cout<<"The HCF of "<<n<<" and "<<m<<" : "<<HCF<<endl;
  
  return 0;
}
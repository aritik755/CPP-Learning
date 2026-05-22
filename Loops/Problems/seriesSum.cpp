// S = 1-2+3-4.....n

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a Number:"<<endl;
  cin>>n;
  
  int result=0;
  for(int i = 1; i<=n; i++){
    if(i%2==0){
      result -= i;
    }
    else{
      result += i;
    }
  }
  cout<<"The sum of the series for given input: "<<result<<endl;
  return 0;
}
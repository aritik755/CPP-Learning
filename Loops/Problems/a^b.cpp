#include<iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"Enter the value of a:";
  cin>>a;
  cout<<"Enter the value of b:";
  cin>>b;

  int result = 1;
  for(int i = 1; i<=b; i++){
    result *= a;
  }
  cout<<"The value of a^b: "<<result<<endl;

}
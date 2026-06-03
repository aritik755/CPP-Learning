#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number: ";
  cin>>n;

  cout<<"Factors of "<<n<<":"<<"\n";
  for(int i = 1; i <= n; i++){
    if(n % i == 0){
      cout<<i<<" ";
    }
  }

  return 0;
}
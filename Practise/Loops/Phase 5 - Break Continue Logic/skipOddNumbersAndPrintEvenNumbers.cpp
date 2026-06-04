#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  cout<<"Even numbers upto given input terms: "<<endl;
  for(int i = 1; i <= n; i++){
    if(i % 2 != 0){
      continue;
    }
    cout<<i<<endl;
  }

  return 0;
}
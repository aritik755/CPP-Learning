#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  for(int i = 1; i <= n; i++){
    if(i % 5 == 0){
      continue;;
    }
    cout<<i<<endl;
    
  }

  return 0;
}
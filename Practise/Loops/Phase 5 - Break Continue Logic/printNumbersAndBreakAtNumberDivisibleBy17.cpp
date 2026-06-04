#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  for(int i = 1; i <= n; i++){
    if(i % 17 == 0){
      break;
    }
    cout<<(i+1)<<endl;
    
  }

  return 0;
}
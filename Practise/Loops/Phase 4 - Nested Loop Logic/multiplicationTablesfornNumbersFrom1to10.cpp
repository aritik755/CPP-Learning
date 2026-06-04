#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= 10; j++){
      int multiplication = i * j;
      cout<<i<<" X "<<j<<" = "<<multiplication<<"\n";
    }
    cout<<endl;
  }

  return 0;
}
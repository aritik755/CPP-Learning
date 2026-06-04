#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  for(int i = 1; i <= n; i++){
    int count = 0;
    for(int j = 1; j <= i; j++){
      if(i % j == 0){
        count++;
      }
    }
    cout<<"Total Factors of "<<i<<" is: "<<count<<"\n";
  }

  return 0;
}
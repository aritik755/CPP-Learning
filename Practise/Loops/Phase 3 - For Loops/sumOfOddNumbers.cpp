#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  int sum = 0;
  for(int i = 1; i <= n; i++){
    if(i % 2 != 0){
      sum += i;
    }
  }
  cout<<"Sum of odd numbers upto given input: "<<sum<<endl;

  return 0;
}
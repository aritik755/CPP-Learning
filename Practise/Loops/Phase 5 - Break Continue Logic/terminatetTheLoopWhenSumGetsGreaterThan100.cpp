#include<iostream>
using namespace std;
int main(){

  int num;
  int sum = 0;

  cout<<"Enter the numbers: "<<endl;
  while(true){
    cin>>num;
    sum += num;

    if(sum > 100){
      break;
    }
  }

  cout<<"Sum = "<<sum<<endl;

  return 0;
}
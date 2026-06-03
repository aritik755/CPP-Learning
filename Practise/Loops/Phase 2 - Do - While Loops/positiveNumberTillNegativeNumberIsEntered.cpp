#include<iostream>
using namespace std;
int main(){
  
  int num;
  int count = 0;
  cout<<"Enter the elements until your input is negative: "<<"\n";
  do{
    cin>>num;
    if(num > 0){
      count++;
    }
  }while(num > 0);

  cout << "Number of positive numbers entered: " <<count<< endl;

  return 0;
}
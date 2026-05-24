#include<iostream>
using namespace std;
int main(){
  int Age;
  cout<<"Enter the age of the person: ";
  cin>>Age;

  if(Age<12){
    cout<<"Child"<<endl;
  }
  else if(Age>12 && Age<18) {
    cout<<"Teenager"<<endl;
  }
  else{
    cout<<"Adult"<<endl;
  }
  return 0;
}
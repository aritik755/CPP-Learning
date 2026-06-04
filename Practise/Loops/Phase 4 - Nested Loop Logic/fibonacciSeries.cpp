#include<iostream>
using namespace std;
int main(){

  int noOfRows;
  cout<<"Enter the number of rows: ";
  cin>>noOfRows;

  int a = 0;
  int b = 1;
  cout<<"Fibonaaci Series upto given number of rows:"<<"\n";
  for(int i = 1; i <= noOfRows; i++){
    for(int j = 1; j <= i; j++){
      cout<<a<<" ";
      int next = a + b;
      a = b;
      b = next;
    }
    cout<<endl;
  }


  return 0;
}
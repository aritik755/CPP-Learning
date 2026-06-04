#include<iostream>
using namespace std;
int main(){

  int m;
  cout<<"Enter the number of terms: ";
  cin>>m;

  int sum = 0;
  for(int i = 1; i <=m; i++){
    int square = i*i;
    sum += square;
  }

  cout<<"Sum of the square series from 1 to n^2: "<<sum<<endl;

  return 0;
}
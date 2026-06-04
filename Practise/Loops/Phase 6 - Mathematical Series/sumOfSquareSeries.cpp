#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  int sum = 0;
  for(int i = 1; i <=n; i++){
    int square = i*i;
    sum += square;
  }

  cout<<"Sum of the square series from 1 to n^2: "<<sum<<endl;

  return 0;
}
#include<iostream>
using namespace std;
int main(){

  int m;
  cout<<"Enter the number of terms: ";
  cin>>m;

  int sum = 0;
  for(int i = 1; i <= m; i++){
    int cube = i*i*i;
    sum += cube;
  }

  cout<<"Sum of the cube series from 1 to n^3: "<<sum<<endl;

  return 0;
}
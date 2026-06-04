#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  int sum = 0;
  for(int i = 1; i <=n; i++){
    int cube = i*i*i;
    sum += cube;
  }

  cout<<"Sum of the cube series from 1 to n^3: "<<sum<<endl;

  return 0;
}
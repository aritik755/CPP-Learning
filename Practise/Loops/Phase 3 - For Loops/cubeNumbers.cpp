#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  cout<<"Cube series upto given input: "<<"\n";
  for(int i = 1; i <= n; i++){
    int cube = i*i*i;
    cout<<cube<<"\n";
  }
  return 0;
}
#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter a number: ";
  cin>>n;

  cout<<"Pythagorean Triplets that are less than n are: "<<endl;
  for(int a = 1; a <= n; a++){
    for(int b = a; b <= n; b++){
      for(int c = b; c <= n; c++){
        if(a*a + b*b == c*c){
          cout<<"("<<a<<","<<b<<","<<c<<")"<<endl;
        }
      }
    }
  }

  return 0;
}
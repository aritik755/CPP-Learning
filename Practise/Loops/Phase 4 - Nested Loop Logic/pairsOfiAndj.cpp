#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  cout<<"Pairs Of i and j from 1 to "<<n<<" :"<<"\n";
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      cout<<"("<<i<<","<<j<<")"<<"\n";
    }
  }

  return 0;
}
#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  double sum = 0;
  for(int i = 1; i <= n; i++){
    sum += (1.0/i);
  }

  cout<<"Sum of the series from 1 +.......+ 1/"<<n<<": "<<sum<<endl;

  return 0;
}
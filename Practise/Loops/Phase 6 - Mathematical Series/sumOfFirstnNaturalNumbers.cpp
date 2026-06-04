#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  int sum = 0;
  for(int i = 1; i <= n; i++){
    sum += i;
  }

  cout<<"Sum of terms from "<<1<<" to "<<n<<" is: "<<sum<<endl;

  return 0;
}
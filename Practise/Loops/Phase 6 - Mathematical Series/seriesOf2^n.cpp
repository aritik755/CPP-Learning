#include<iostream>
#include<cmath>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  cout<<"Power Series of 2 for "<<n<<" terms: "<<endl;
  for(int i = 0; i < n; i++){
    cout<<pow(2,i)<<" ";
  }

  return 0;
}

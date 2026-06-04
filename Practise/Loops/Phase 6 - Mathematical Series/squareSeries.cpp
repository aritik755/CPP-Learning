#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  cout<<"Square series from 1 to "<<n<<": "<<endl;
  for(int i = 1; i <=n; i++){
    int square = i*i;
    cout<<square<<" ";
  }

  return 0;
}
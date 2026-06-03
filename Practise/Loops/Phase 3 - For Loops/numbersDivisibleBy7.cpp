#include<iostream>
using namespace std;
int main(){

  int n, m;
  cout<<"Enter the range of numbers: ";
  cin>>n>>m;

  cout<<"Numbers between "<<n<<" and "<<m<<" that are divisible by 7: "<<endl;
  for(int i = n; i <= m; i++){
    if(i % 7 == 0){
      cout<<i<<endl;
    }
  }

  return 0;
}
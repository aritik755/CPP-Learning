#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter a number: ";
  cin>>n;

  cout<<"Prime Numbers between 1 to "<<n<<" :";
  for(int i = 2; i <= n; i++){
    int count = 0;
    for (int j = 1; j <= i; j++){
      if(i % j == 0){
        count++;
      }
    }
    if(count == 2){
      cout<<i<<"\n";
    }
  }

  return 0;
}
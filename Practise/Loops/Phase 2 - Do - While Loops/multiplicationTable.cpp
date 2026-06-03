#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter a number: ";
  cin>>n;

  int i = 1;
  do{
    int multiplication = n * i;
    cout<<n<<" X "<<i<<" = "<<multiplication<<"\n";
    i++;
  }while(i <= 10);

  return 0;
}
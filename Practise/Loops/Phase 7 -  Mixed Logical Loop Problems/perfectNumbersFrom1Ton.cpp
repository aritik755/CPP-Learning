#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  cout<<"Perfect Numbers between 1 to "<<n<<" are: "<<endl;
  for(int i = 1; i <= n; i++){
    int sum = 0;
    for(int j = 1; j < i; j++){
      if(i % j == 0){
        sum += j;
      }
    }

    if(sum == i){
      cout<<i<<endl;
    }
  }

  return 0;
}
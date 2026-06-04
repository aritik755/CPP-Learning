#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  int count = 0;
  for(int i = 1; i <= n; i++){
  if(i % 7 == 0 && i % 5 != 0){
      count++;
    }
  }

  cout<<"Number of terms between 1 to "<<n<<" that are divisbile by 7 but not by 5 are: "<<count<<endl;

  return 0;
}
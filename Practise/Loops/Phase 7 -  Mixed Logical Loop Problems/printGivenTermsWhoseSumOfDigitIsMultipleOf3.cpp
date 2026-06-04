#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  cout<<"Numbers between 1 to "<<n<<" whose sum of digits is multiple of 3: "<<endl;
  for(int i = 1; i <= n; i++){
    int num = i;
    int sum = 0;

    while(num > 0){
      sum += num % 10;
      num /= 10; 
    }
    
    if(sum % 3 == 0){
      cout<<i<<"\n";
    }
  }

  return 0;
}
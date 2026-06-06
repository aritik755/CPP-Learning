// 6. Find the sum of even elements only.
#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the size of array: ";
  cin>>n;

  int array[n];

  cout<<"Enter the elements of array: "<<endl;
  for(int i = 0; i < n; i++){
    cin>>array[i];
  }

  int sumEven = 0;
  for(int i = 0; i < n; i++){
    if(array[i] % 2 == 0){
      sumEven += array[i];
    }
  }

  cout<<"Sum of Even Elements of an array: "<<sumEven<<endl;
  
  return 0;
}
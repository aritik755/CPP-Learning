// 7. Count how many elements are even and odd.
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

  int evenCount = 0;
  int oddCount = 0;
  for(int i = 0; i < n; i++){
    if(array[i] % 2 == 0){
      evenCount++;
    }
    if(array[i] % 2 != 0){
      oddCount++;
    }
  }

  cout<<"Number of Even Elements in the array: "<<evenCount<<endl;
  cout<<"Number of Odd Elements in the array: "<<oddCount<<endl;

  return 0;
}
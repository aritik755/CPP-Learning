// 9. Count how many numbers are divisible by 3 and 5 both.
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

  cout<<"Elements divisible by 3 and 5 in the Array: "<<endl;
  for(int i = 0; i < n; i++){
    if(array[i] % 3 == 0 && array[i] % 5 ==0){
      cout<<array[i]<<endl;
    }
  }
  
  return 0;
}
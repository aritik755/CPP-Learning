// 2. Create a new array containing only even elements.
#include<iostream>
using namespace std;
int main(){
  
  int n;
  cout<<"Enter the Size of Array: ";
  cin>>n;

  int array1[n];

  cout<<"Enter the elements of array: "<<endl;
  for(int i = 0; i < n; i++){
    cin>>array1[i];
  }

  int array2[n];

  int j = 0;
  for(int i = 0; i < n; i++){
    if(array1[i] % 2 == 0){
      array2[j] = array1[i];
      j++;
    }
  }

  cout<<"Even Elements Array: "<<endl;
  for(int k = 0; k < j; k++){
    cout<<array2[k]<<endl;
  }

  return 0;
}
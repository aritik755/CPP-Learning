// 9. Swap alternate elements (1st ↔ 2nd, 3rd ↔ 4th, etc.).
#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the size of array: ";
  cin>>n;

  int array[n];

  cout<<"Enter the Elements of the Array: "<<endl;
  for(int i = 0; i < n; i++){
    cin>>array[i];
  }

  for(int i = 0; i < n - 1; i += 2){
    int temp = array[i];
    array[i] = array[i+1];
    array[i+1] = temp; 
  }

  cout<<"Swaped Array: "<<endl;
  for(int i = 0; i < n; i++){
    cout<<array[i]<<" ";
  }


  return 0;
}
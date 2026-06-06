// 10. Copy one array to another manually
#include<iostream>
using namespace std;
int main(){

  int n; 
  cout<<"Enter the size of array: ";
  cin>>n;

  int array1[n];
  int array2[n];

  cout<<"Enter the elements of array: "<<endl;
  for(int i = 0; i < n; i++){
    cin>>array1[i];
    array2[i] = array1[i];
  }

  cout<<"Copied Elements of array: "<<endl;
  for(int i = 0; i < n; i++){
    cout<<array2[i]<<" ";
  }

  return 0;
}
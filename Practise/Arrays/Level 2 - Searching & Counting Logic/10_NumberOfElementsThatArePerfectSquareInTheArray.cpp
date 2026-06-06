// 10. Count how many elements are perfect squares.
#include<iostream>
#include<cmath>
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

  int count = 0;
  for(int i = 0; i < n; i++){
    
    int root = sqrt(array[i]);

    if(root*root == array[i]){
      count++;
    }
  }
  
  cout<<"No. of Perfect Squares in the Array: "<<count<<endl;
  
  return 0;
}
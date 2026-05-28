#include<iostream>
using namespace std;
int main(){

  int n, m;
  cout<<"Enter the rows and columns of 2D Array: ";
  cin>>n>>m;
  
  int array[n][m]; // 2D Array

  cout<<"Enter the elements of 2D Array: ";
  for(int i = 0; i < n; i++){ // Input of 2D Array
    for(int j = 0; j < m; j++){
      cin>>array[i][j];
    }
  }

  cout<<"Elements of Array are: "; 
  for(int i = 0; i < n; i++){ // Output of Elements
    for(int j = 0; j < m; j++){
      cout<<array[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}
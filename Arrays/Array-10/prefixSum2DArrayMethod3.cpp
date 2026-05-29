#include<iostream>
#include<vector>
using namespace std;

int rectangleSum(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2){

  int sum = 0;
  
  // Prefix Sum Array Row-wise
  for(int i = 0; i < matrix.size(); i++){
    for(int j = 1; j < matrix[0].size(); j++){
      matrix[i][j] += matrix[i][j-1];
    }
  }

  // Prefix Sum Array Column-wise
  for(int i = 1; i < matrix.size(); i++){
    for(int j = 0; j < matrix[0].size(); j++){
      matrix[i][j] += matrix[i-1][j];
    }
  }

  // Printing Prefix Sum 2D Array
  cout<<"Prefix sum 2D Array:\n";
  for(int i = 0; i < matrix.size(); i++){
    for(int j = 0; j < matrix[0].size(); j++){
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }

  int top_Sum = 0, left_Sum = 0, topLeft_Sum = 0;
  if(l1!=0){
    top_Sum = matrix[l1-1][r2];
  }
  if(r1!=0){
    left_Sum = matrix[l2][r1-1];
  }
  if(l1!=0 && r1!=0){
    topLeft_Sum = matrix[l1-1][r1-1];
  }
  sum = matrix[l2][r2] - top_Sum - left_Sum + topLeft_Sum;

  return sum;
}

int main(){

  int n,m;
  cout<<"Enter the rows and columns of matrix: ";
  cin>>n>>m;

  vector<vector<int>> matrix(n, vector<int> (m));

  cout<<"Enter the elements of the matrix: ";
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin>>matrix[i][j];
    }
  }

  cout<<"Given Matrix:\n";
  for(int i = 0; i < matrix.size(); i++){
    for(int j = 0; j < matrix[i].size(); j++){
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }

  int l1,r1,l2,r2;
  cout<<"Enter conditions/coordinates for sum in the following order(l1/r1/l2/r2): ";
  cin>>l1>>r1>>l2>>r2;
  
  int sum = rectangleSum(matrix, l1,r1,l2,r2);
  cout<<"Sum of the elements of the given matrix according to given coordinates: "<<sum<<endl;

  return 0;
}
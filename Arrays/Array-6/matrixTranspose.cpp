#include<iostream>
using namespace std;
int main(){

  int n,m;
  cout<<"Enter the number of rows and columns of matrix: ";
  cin>>n>>m;

  int array[n][m];

  cout<<"Enter the Elements of the Matrix:\n";
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin>>array[i][j];
    }
  }

  cout<<"Original Matrix:\n";
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout<<array[i][j]<<" ";
    }
    cout<<endl;
  }

  int transpose[m][n]; // In transpose rows and columns are interchanged.
  for(int i = 0; i < m; i++){ // Here Rows will be m and columns will be n.
    for(int j = 0; j < n; j++){
      transpose[i][j] = array[j][i];
    }
  }

  cout<<"Transpose Matrix:\n";
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      cout<<transpose[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}
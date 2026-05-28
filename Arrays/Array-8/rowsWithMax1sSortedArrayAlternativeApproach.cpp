#include<iostream>
#include<vector>

using namespace std;

int leftMostOneRow(vector<vector<int>> &V){

  int leftMostOne = -1;
  int maxOnesRow = -1;
  int j = V[0].size() - 1;
 
  // Finding leftMost one in 0th row.
  while(j >= 0 && V[0][j]==1){
    leftMostOne = j;
    maxOnesRow = 0;
    j--;
  }

  // Check in rest of the rows if we can find a one left to the leftMostOne.
  for(int i = 1; i < V.size(); i++){
    while(j >= 0 && V[i][j]==1){
      leftMostOne = j;
      j--;
      maxOnesRow = i;
    }
  }
  return maxOnesRow;
} 

int main(){

  int n, m;
  cout<<"Enter rows and columns of the matrix: ";
  cin>>n>>m;

  vector<vector<int>> v(n, vector<int> (m));

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin>>v[i][j];
    }
  }

  int result = leftMostOneRow(v);

  cout<<"Row(Index) have maximum number of ones: "<<result<<endl;

  return 0;
}
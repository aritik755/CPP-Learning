#include<iostream>
#include<vector>

using namespace std;

int maximumOnesRow(vector<vector<int>>&V){

  int maxOnes = INT16_MIN;
  int maxOneRow = -1; // Maximum ones row index
  int columns = V[0].size();

  for(int i = 0; i < V.size(); i++){
    for(int j = 0; j < V[i].size(); j++){
      
      if(V[i][j] == 1){
        int numberOfOnes = columns - j;
        if(numberOfOnes > maxOnes){
          maxOnes = numberOfOnes;
          maxOneRow = i;
        }
        break;
      }
    }
  }

  return maxOneRow;
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

  int result = maximumOnesRow(v);

  cout<<"Row(Index) have maximum number of ones: "<<result<<endl;

  return 0;
}
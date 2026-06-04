#include<iostream>
using namespace std;
int main(){

  int n, m;
  cout<<"Enter rows and columns of the matrix: ";
  cin>>n>>m;

  int array[n][m];
  
  cout<<"Enter the elements of the array:"<<"\n";
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      cin>>array[i][j];
    }
  }

  cout<<"Matrix: "<<"\n";
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      cout<<array[i][j]<<" ";
    }
    cout<<endl;
  }

  cout<<"Rows Sum :- "<<endl;
  for(int i = 1; i <= n; i++){
    int rowSum = 0;
    for(int j = 1; j <= m; j++){
      rowSum += array[i][j];
    }
    cout<<"Sum of row "<<i<<" = "<<rowSum<<endl;
  }

  cout<<"Columns Sum :- "<<endl;
  for(int j = 1; j <= m; j++){
    int colSum = 0;
    for(int i = 1; i <= n; i++){
      colSum += array[i][j];
    }
    cout<<"Sum of column "<<j<<" = "<<colSum<<endl;
  }


  return 0;
}
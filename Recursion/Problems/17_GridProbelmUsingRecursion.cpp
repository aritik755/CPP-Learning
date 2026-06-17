#include<iostream>
using namespace std;
int f(int i, int j, int m, int n){
  if(i == m-1 && j == n-1) return 1;
  if(i >= m || j >= n) return 0;
  return f(i, j+1, m, n) + f(i+1, j, m, n);
}

int main(){

  cout<<"Maximum number of paths to reach the end of a (m x n) grid: "<<f(0,0,2,3)<<endl;

  return 0;
}
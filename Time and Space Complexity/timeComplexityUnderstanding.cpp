#include<iostream>
using namespace std;

int sumInRange(int x, int y){

  int result = 0;
  for(int i = x; i <= y; i++){
    result += i;
  }
  return result;
}

int sumInRangeOptimized(int x, int y){
  
  int n = (y - x + 1);
  int a = x;
  int result;

  result = (n*(2*a + (n-1)*1))/2;

  return result;

}


int main(){

  cout<<"Sum of the numbers in the given range: "<<sumInRange(2,6)<<endl;
  cout<<"Sum of the numbers in the given range: "<<sumInRangeOptimized(2,100000)<<endl;
  
  return 0;
}
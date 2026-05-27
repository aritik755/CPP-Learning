#include<iostream>
#include<vector>
using namespace std;
int main(){

  int array[] = {0,1,5,6,8,14,20};
  
  int targetSum;
  cout<<"Enter the Target Sum: ";
  cin>>targetSum;

  int size = 7; 

  int pairs = 0;
  for(int i = 0; i<size; i++){
    for(int j = i+1; j<size; j++){
      if(array[i] + array[j] == targetSum){
        pairs++;
      }
    }
  } 

  cout<<"No. of Pairs can be formed for given target sum: "<<pairs<<endl;

  return 0;
}
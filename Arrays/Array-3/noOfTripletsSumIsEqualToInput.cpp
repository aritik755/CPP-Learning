#include<iostream>
#include<vector>
using namespace std;
int main(){

  int array[] = {0,1,5,6,8,14,20};
  
  int targetSum;
  cout<<"Enter the Target Sum: ";
  cin>>targetSum;

  int size = 7; 

  int triplets = 0;
  for(int i = 0; i<size; i++){
    for(int j = i+1; j<size; j++){
      for(int k = j+1; k<size; k++){
        if(array[i] + array[j] + array[k] == targetSum){
        triplets++;
      }
      }
    }
  } 

  cout<<"No. of Triplets can be formed for given target sum: "<<triplets<<endl;

  return 0;
}
#include<iostream>
#include<vector>
using namespace std;

void sortZerosAndOnes(vector<int> &v){ // Pass by Reference
  
  int zeros_Count = 0;
  
  for(int elements:v){
    if(elements==0){
      zeros_Count++;
   }
  } 

  for(int i = 0; i < v.size(); i++){
    if(i<zeros_Count){
      v[i] = 0;
    }
    else{
      v[i] = 1;
    }
  }
}

int main(){

  int n;
  cout<<"Enter the size of vector: ";
  cin>>n;
  
  vector<int> v;

  cout<<"Enter the Elements:";
  for(int i = 0; i < n; i++){
    int elements;
    cin>>elements;
    v.push_back(elements);
  }
  
  sortZerosAndOnes(v); // Function for sorting 0s and 1s.
  
  cout<<"Sorted Elements of the given Vector: ";
  for(int i = 0; i < n; i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;


  return 0;
}
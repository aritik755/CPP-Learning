#include<iostream>
#include<vector>
using namespace std;
int main(){

  vector<int> v(6);
  cout<<"Enter the values of vector: ";
  for(int i = 0; i < 6; i++){
    cin>>v[i];
  }
  
  int x;
  cout<<"Enter the value of occurance number: ";
  cin>>x;

  int occurance = -1;
  for(int i = 0; i<v.size(); i++){
    if(v[i] == x){
        occurance = i;
    }
  }

  for(int i = v.size() - 1; i >= 0; i--){ // Reversing the loop.
    if(v[i] == x){
        occurance = i;
        break;
    }
  }

  cout<<"Last place of occurance number: "<<occurance<<endl;
  
  return 0;
}  
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
  cout<<"Enter the value of x: ";
  cin>>x;

  int count = 0;

  for(int i = 0; i<v.size(); i++){
    if(v[i] > x){
        count++;
    }
  }

  cout<<"No of elements greater than x: "<<count<<endl;
  
  return 0;
}  
// 3. Merge two arrays into a third array.
#include<iostream>
#include<vector>
using namespace std;
int main(){

 vector<int> v1 = {10,20,30,40,50};
 vector<int> v2 = {60,70,80,90,100};
 vector<int> v3;

  for(int i = 0; i < v1.size(); i++){
    v3.push_back(v1[i]);
  }
 
  for(int i = 0; i < v2.size(); i++){
    v3.push_back(v2[i]);
  }
  
  cout<<"Merged Array: "<<endl;
  for(int i = 0; i < v3.size(); i++){
    cout<<v3[i]<<" ";
  }

  return 0;
}
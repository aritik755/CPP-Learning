#include<iostream>
#include<vector>
using namespace std;
int main(){
  
  vector<int> v;

  // for loop
  cout<<"Enter the Elements:";
  for(int i = 0; i<5; i++){
    int element;
    cin>>element;
    v.push_back(element);

    //cin>>v[i];
  }

  cout<<"The Elements are: ";
  for(int i = 0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;

  v.insert(v.begin()+2,6); // v.insert(position,element) and v.begin() vector starting position

  // for each loop
  for(int ele:v){
    cout<<ele<<" ";
  }
  cout<<endl;

  v.erase(v.end()-2); // v.erase(position) v.end() is getting position from the end

  // while loop
  int idx = 0;
  while(idx<v.size()){
    cout<<v[idx++]<<" ";
  }

  return 0;
}
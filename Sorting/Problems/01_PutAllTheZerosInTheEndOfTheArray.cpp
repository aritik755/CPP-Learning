#include<iostream>
#include<vector>
using namespace std;

void swapZeros(vector<int> &v){
  int n = v.size();
  for(int i = n-1; i >= 0; i--){
    
    int j = 0;
    bool flag = false;
    
    while(j != i){
      if(v[j] == 0 && v[j+1] != 0){
        swap(v[j] , v[j + 1]);
        flag = true;
      }
      j++;
    }
    if(!flag) break;
  }
  return;
}

int main(){

  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;

  vector<int> v(n);

  cout<<"Enter the elements of the array: "<<endl;
  for(int i = 0; i < n; i++){
    cin>>v[i];
  }

  swapZeros(v);

  cout<<"Array with all zeros at the end: "<<endl;
  for(int i = 0; i < n; i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;

  return 0;
}

// Time Complexity = O(n^2)
// Space Complexity = O(1)
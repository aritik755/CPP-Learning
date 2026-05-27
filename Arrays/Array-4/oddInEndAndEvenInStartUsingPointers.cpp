#include<iostream>
#include<vector>
using namespace std;

void sortByParity(vector<int> &v){ // Pass by Reference
  
  int left_Ptr = 0;
  int right_Ptr = v.size()-1; // Last element of vector

  while(left_Ptr<right_Ptr){
    if(v[left_Ptr]%2==1 && v[right_Ptr]%2==0){
      swap(v[left_Ptr], v[right_Ptr]); // Swap Function
      left_Ptr++; right_Ptr--;
    }

    if(v[left_Ptr]%2==0){
      left_Ptr++;
    }
    if(v[right_Ptr]%2==1){
      right_Ptr--;
    }
  }

  return;

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
  
  sortByParity(v);
  
  cout<<"Sorted Elements of the given Vector: ";
  for(int i = 0; i < n; i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;

  return 0;
}
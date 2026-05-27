#include<iostream>
#include<vector>
using namespace std;

void sortZerosAndOnes(vector<int> &v){ // Pass by Reference
  
  int left_Ptr = 0;
  int right_Ptr = v.size()-1; // Last element of vector

  while(left_Ptr<right_Ptr){
    if(v[left_Ptr]==1 && v[right_Ptr]==0){
      v[left_Ptr++] = 0;
      v[right_Ptr--] = 1;
    }

    if(v[left_Ptr]==0){
      left_Ptr++;
    }
    if(v[right_Ptr]==1){
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
  
  sortZerosAndOnes(v); // Function for sorting 0s and 1s.
  
  cout<<"Sorted Elements of the given Vector: ";
  for(int i = 0; i < n; i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;

  return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortedSquaredArray(vector<int> &v){ // Pass by Reference
  
  vector<int> ans; // Storing Stored Square Values

  int left_Ptr = 0;
  int right_Ptr = v.size() - 1;
  
  while(left_Ptr <= right_Ptr){
      if(abs(v[left_Ptr]) < abs(v[right_Ptr])){ // abs is used to find the absolute value of given number. 
          ans.push_back(v[right_Ptr]*v[right_Ptr]);
          right_Ptr--;
      } 
      else{
        ans.push_back(v[left_Ptr]*v[left_Ptr]);
        left_Ptr++;
      }
  }

  reverse(ans.begin(),ans.end()); // For Non-Decreasing Order/Increasing Order.
  cout<<"Sorted Array: ";
  for(int i = 0; i < ans.size(); i++){
    cout<<ans[i]<<" ";
  }
  cout<<endl;

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
  
  sortedSquaredArray(v);

  return 0;
}
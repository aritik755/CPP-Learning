// 1 Base Indexing in this particular problem.

#include<iostream>
#include<vector>
using namespace std;
int main(){

  int n;
  cout<<"Enter the size of the vector: ";
  cin>>n;

  vector<int> v(n+1,0);
  // 0 based indexing --> 0 ...... n-1
  // 1 based indexing --> 1 ....... n (So we have use n+1 size of this vecot and initialized it with zero.)
  
  cout<<"Enter the Elements: ";
  for(int i = 1; i <= n; i++){ //(i = 1) because 1 based indexing.
    cin>>v[i];
  }

  // calculate prefix sum array
  for(int i = 1; i <= n; i++){
    v[i] += v[i-1];
  }

  int q;
  cout<<"Enter the number of queries: ";
  cin>>q;
  
  while(q--){
    int l,r;
    cout<<"Enter the value of l and r: ";
    cin>>l>>r;

    int ans = 0;
    // ans = prefixSumArray[r] - prefixSumArray[l-1]
    ans = v[r] - v[l-1];
    cout<<"Sum for given query: "<<ans<<endl;
  }
    
  return 0;

}

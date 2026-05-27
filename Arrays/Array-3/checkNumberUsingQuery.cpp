#include<iostream>
#include<vector>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of elements of array = ";
  cin>>n;

  vector<int> v(n);
  
  cout<<"Enter the Elements of array: ";
  for(int i = 0; i < n; i++){
    cin>>v[i];
  }

  const int N = 1e5 + 10; // 10^5
  vector<int> freq(N,0); // Size=N and Intialized with 0.
  for(int i = 0; i < n; i++){
    freq[v[i]]++;
  }

  int q;
  cout<<"Enter the number of queries: ";
  cin>>q;

  while(q--){
    int queryelement;
    cout<<"Enter the elements of query: ";
    cin>>queryelement;
    cout<<"Query is Present(times): "<<freq[queryelement]<<endl;
  }
  return 0;
}
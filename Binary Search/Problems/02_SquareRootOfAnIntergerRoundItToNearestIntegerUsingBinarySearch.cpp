#include<iostream>
using namespace std;

int sqrt(int x){
  int lo = 0; 
  int hi = x;
  int ans = -1;
  while(lo <= hi){
    int mid = lo + (hi - lo)/2;
    if(mid * mid <= x){
      ans = mid;
      lo = mid + 1;
    }
    else{
      hi = mid - 1;
    }
  }
  return ans;
}

int main(){

  int n;
  cout<<"Enter a number: ";
  cin>>n;

  cout<<"Square Root of n(Rounded to Nearest Integer): "<<sqrt(n)<<endl;

  return 0;
}

// Space Complexity = O(1)
// Time Complexity = O(log x)
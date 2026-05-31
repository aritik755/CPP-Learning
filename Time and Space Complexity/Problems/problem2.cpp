#include<iostream>
using namespace std;
int main(){

  int N = 3;
  int value = 0;
  for(int i = 1; i <= N; i *= 2){
    for(int j = 1; j <= i; j++){
      value++;
    }
  }

  return 0;
}

/**
 * No of Iterations in the loop: 1 + 2 + 4 + 8 ............ 2^k
 * Here it can be written as 2^0 + 2^1 + 2^2 + 2^3 + 2^4 ............. 2^k (Here it is a G.P.)
 * Sum of this G.P. is 2^k-1 (Here -1 can be ignored because it is a constant.)
 * Here K is the no. of times i is multiplied.
 * If i is getting multiplied k times than the the value of n will ne greater than or equal to 2^k.
 * By taking log both sides K <= log n
 * Total Iteration --> 2^K = 2^log n
 * So the time complexity is O(N).
 */
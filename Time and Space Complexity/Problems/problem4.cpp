#include<iostream>
using namespace std;
int main(){

  int N = 3;
  int value = 0;
  for(int i = 1; i > 0; i /= 2){
    for(int j = 0; j < i; j++){
      value++;
    }
  }

  return 0;
}

/**
 * At i = N/1 and j --> [0,(N)-1] // N iteration
 * At i = N/2 and j --> [0,(N/2)-1] // N/2 iteration
 * At i = N/4 and j --> [0,(N/4)-1] // N/4 iteration
 * At i = N/8 and j --> [0,(N/8)-1] // N/8 iteration
 * .
 * .
 * .
 * .
 * .
 * At i = (N/2^K-1) = 1 and j --> [0 , 0]
 * 
 * Total Iteration = N + N/2 + N/4 + N/8 + ....... + 1
 *                 = N(1 + 1/2 + 1/4 + 1/8 ....... 1/N) 
 *                 = 2(N-1)
 * --> N/2^(K-1) = 1
 * --> N = 2^(K-1)
 * --> 2N = 2^K
 * --> log2N = k
 * --> k ~= logN
 * Time Complexity = O(N) 
 */
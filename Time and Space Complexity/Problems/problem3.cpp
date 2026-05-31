#include<iostream>
using namespace std;
int main(){

  int N = 3;
  int value = 0;
  for(int i = 1; i <= N; i *= 2){
    for(int j = N; j >= i; j--){
      value++;
    }
  }

  return 0;
}

/**
 * At i = 1 and j --> [N,2] 
 * At i = 2 and j --> [N,3]
 * At i = 4 and j --> [N,5]
 * At i = 8 and j --> [N,7]
 * .
 * .
 * .
 * .
 * .
 * At i = 2^(K-1) and j --> [N,2^(K-1) +1]
 * 
 * Total Iteration = (N-1) + (N-2) + (N-4) + (N-8) ............. (N-2^(K-1))
 * Total Iteration = (N-1) + (N-2^1) + (N-2^2) + (N-2^3) ............. (N-2^(K-1))
 * Total Iteration = (N+N+N+N...K Times)-(2^0 + 2^1 + 2^2 +........+ 2^(K-1))
 * Total Iteration = (NK + 2^K -1)
 * --> 2^(K-1) <= N
 * --> (K-1) <= log N
 * --> K <= log N + 1
 * --> k ~= log N
 * NlogN + 2^logN - 1
 * Time Complexity = O(Nlog N) 
 */
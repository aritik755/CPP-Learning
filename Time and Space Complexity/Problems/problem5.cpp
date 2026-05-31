#include<iostream>
using namespace std;
int main(){

  int N = 3;
  int value = 0;
  for(int i = 2; i <= N; i *= i){
      value++;
  }

  return 0;
}

/**
 * 2 --> 4 --> 16 --> 256 ................. 2^k
 * 2^1 --> 2^2 --> 2^4 --> 2^8 ............ 2^k
 * Here , 2^k <= N beacuse there are only n iterations 
 * taking log both sides 
 * k <= log N
 * The powers of the given series is 2^0 --> 2^1 --> 2^2 --> 2^3 --> 2^4 ............. 2^T=K
 * 2^T <= k
 * T <= logk
 * T ~= O(log k)
 * T ~= O(log(log N))
 * So the time complexity for the given problem is O(log(log N)). 
 */
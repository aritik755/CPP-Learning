#include<iostream>
using namespace std;
int main(){

  int n = 5;
  int value = 0;
 
  for(int i = 1; i <=n; i *= 2){
    value++;
  }

  return 0;
}

/**
 * 1 --> 2 --> 4 --> 8 --> 16 ................. 2^k
 * 2^0 --> 2^1 --> 2^2 --> 2^3 --> 2^4 ............. 2^k
 * Here , 2^k <= n beacuse there are only n iterations 
 * taking log both sides 
 * k <= log n
 * So the time complexity for the given problem is O(log n). 
 */
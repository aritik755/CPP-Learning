// 10. Print all elements that appear more than once.
#include<iostream>
using namespace std;
int main(){

  int array1[] = {1,1,3,1,1,2,3};
  int n = 7;

  int maxElement = 0;
  for(int i = 0; i < n; i++){
    if(array1[i] > maxElement){
      maxElement = array1[i];
    }
  }

  int freq[maxElement + 1];

  for(int i = 0; i <= maxElement; i++){
    freq[i] = 0;
  }

  for(int i = 0; i < n; i++){
    freq[array1[i]]++;
  }

  cout << "Duplicate Elements:" << endl;
  for(int i = 0; i <= maxElement; i++){
      if(freq[i] > 1){
        cout << i << " ";
      }
    }

  return 0;
}
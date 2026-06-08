// 4. Find the second smallest element in an array.
#include<iostream>
#include<climits>
using namespace std;
int main(){

  int array[] = {20,40,50,80,90,100};
  int n = sizeof(array) / sizeof(array[0]);

  int smallestElement = INT_MAX;;
  int secondSmallestElement = INT_MAX;;

  for(int i = 0; i < n; i++){
    if(array[i] < smallestElement){
      secondSmallestElement = smallestElement;
      smallestElement = array[i];
    }
    else if(array[i] < secondSmallestElement && array[i] != smallestElement){
      secondSmallestElement = array[i];
    }
  }

  cout << "Second smallest Element: " << secondSmallestElement;

  return 0;
}
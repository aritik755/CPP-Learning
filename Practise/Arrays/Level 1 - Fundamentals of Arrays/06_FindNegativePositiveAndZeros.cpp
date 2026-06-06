// 6. Count how many elements are positive, negative, or zero.
// 5. Find the minimum element in an array.
#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the size of array: ";
  cin>>n;

  int array[n];

  cout<<"Enter the elements of array: "<<endl;
  for(int i = 0; i < n; i++){
    cin>>array[i];
  }

  int positiveCount = 0;
  int negativeCount = 0;
  int zeroCount = 0;
  for(int i = 0; i < n; i++){
    if(array[i] > 0){
      positiveCount++;
    }
    if(array[i] < 0){
      negativeCount++;
    }
    if(array[i] == 0){
      zeroCount++;
    }
  }

  cout<<"Number of Postive Elements in the array: "<<positiveCount<<endl;
  cout<<"Number of Negative Elements in the array: "<<negativeCount<<endl;
  cout<<"Number of Zero Elements in the array: "<<zeroCount<<endl;

  return 0;
}
/* In Bucket Sort we use scatter and gather approach in which we define the range of numbers and but the elements in the calculated range
array and sort them using the array*/
#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

void bucketSort(float arr[], int size){

  float maxElement = arr[0];
  float minElement = arr[0]; 
  for(int i = 0; i < size; i++){
    maxElement = max(maxElement, arr[i]);
    minElement = min(minElement, arr[i]);
  }
  float range = (maxElement - minElement)/size;


  // step 1
  vector<vector<float> > bucket(size, vector<float> ());

  // step 2; inserting elements into bucket
  for(int i = 0; i < size; i++) {
    int index = (arr[i]-minElement)/range;
    // boundary elements
    float diff = (arr[i] - minElement)/range - index;
    if(diff == 0 && arr[i] != minElement){
      bucket[index-1].push_back(arr[i]);
    }
    else{
      bucket[index].push_back(arr[i]);
    }
  } 

  // step 3: sorting individual bucket
  for(int i = 0; i < size; i++){
    if(!bucket[i].empty()){
      sort(bucket[i].begin(), bucket[i].end());
    }
  }

  // step4: combining elemets from the buckets
  int k = 0;
  for(int i = 0; i < size; i++){
    for(int j = 0; j < bucket[i].size(); j++){
      arr[k++] = bucket[i][j];
    }
  }
}

int main(){

  float arr[] = {6.13, 8.45, 0.12, 1.89, 4.75, 2.63, 7.85, 10.39};
  int size = sizeof(arr)/sizeof(arr[0]);

  bucketSort(arr, size);

  cout<<"Sorted Array: "<<endl;
  for(int i = 0; i < size; i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}

// Time Complexity(Worst case) = O(n^2)
// Time Complexity(any case) = O(n^2)
// Space Complexity = O(n+k)
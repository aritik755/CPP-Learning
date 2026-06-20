#include<iostream>
#include<cstring>
using namespace std;

void selectionSort(char fruit[][60], int n){
 
  for(int i = 0; i < n-1; i++){
    int minIndex = i;
    for(int j = i+1; j < n; j++){
      if(strcmp(fruit[minIndex], fruit[j]) > 0){
        minIndex = j;
      }
    }
      if(i != minIndex){
        swap(fruit[i], fruit[minIndex]);
      }
  }
 
  return;
}

int main(){

  char fruit[][60] = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};

  int n = sizeof(fruit)/sizeof(fruit[0]);

  selectionSort(fruit, n);

  cout<<"Sorted Array: "<<endl;
  for(int i = 0; i < n; i++){
    cout<<fruit[i]<<" ";
  } 
  cout<<endl;

  return 0;
}
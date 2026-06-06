// 5. Check if all elements in an array are unique.
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

  int count = 0;
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      if(array[i] == array[j]){
        count++;
      }
    }
  }

  if(count > 0){
        cout << "Elements present in the array are not unique." << endl;
  }
  else{
        cout << "Elements present in the array are unique." << endl;
  }


  return 0;
}
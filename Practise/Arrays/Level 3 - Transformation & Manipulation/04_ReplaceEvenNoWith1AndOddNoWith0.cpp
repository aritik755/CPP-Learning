// 4. Replace all even numbers with 1 and all odd with 0.
#include<iostream>
using namespace std;
int main(){
  
  int n;
  cout<<"Enter the Size of Array: ";
  cin>>n;

  int array[n];

  cout<<"Enter the elements of array: "<<endl;
  for(int i = 0; i < n; i++){
    cin>>array[i];
  }


  cout<<"Altered Array: "<<endl;
  for(int i = 0; i < n; i++){
    if(array[i] % 2 == 0){
      array[i] = 1;
    }
    else{
      array[i] = 0;
    }
    cout<<array[i]<<endl;
  }

  return 0;
}
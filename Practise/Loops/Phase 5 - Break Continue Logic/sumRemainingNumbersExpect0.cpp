#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of elements: ";
  cin>>n;

  int array[n];
  cout<<"Enter "<<n<<" Elements: "<<endl;
  for(int i = 0; i < n; i++){
    cin>>array[i];
  }

  int sum = 0;
  for(int i = 0; i < n; i++){
    if(array[i] == 0){
      continue;
    }
    sum += array[i];
  }
  cout<<"Sum of the elements expect 0: "<<sum<<endl;

  return 0;
}
#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;

  int array[n];
  cout<<"Enter "<<n<<" elements: "<<endl;
  for(int i = 0; i < n; i++){
    cin>>array[i];
  }

  int element;
  cout<<"Enter the target element: ";
  cin>>element;
  
  cout<<"Target element found: ";
  for(int i = 0; i < n; i++){
    if(array[i] == element){
      cout<<element<<endl;
      break;
    }
  }

  return 0;
}
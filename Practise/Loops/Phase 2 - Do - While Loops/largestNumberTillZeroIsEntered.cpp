#include<iostream>
using namespace std;
int main(){
  
  int sum = 0;
  int i = 1;
  int largestElement = 0;
  cout<<"Enter the elements until your input is zero: "<<"\n";
  do{
    int num;
    cin>>num;
    if(num > largestElement){
      largestElement = num;
    }
    if(num == 0){
      break;
    }
    else{
      i++;
    }
  }while(i > 0);
  cout<<"Largest Element: "<<largestElement<<endl;

  return 0;
}
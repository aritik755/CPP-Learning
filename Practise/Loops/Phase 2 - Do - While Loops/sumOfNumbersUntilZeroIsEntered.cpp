#include<iostream>
using namespace std;
int main(){
  
  int sum = 0;
  int i = 1;
  cout<<"Enter the elements until your input is zero: "<<"\n";
  do{
    int num;
    cin>>num;
    sum += num;
    if(num == 0){
      cout<<sum<<endl;
      break;
    }
    else{
      i++;
    }
  }while(i > 0);

  return 0;
}
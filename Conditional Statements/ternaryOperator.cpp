#include<iostream>
using namespace std;
int main(){
  int marks;
  cout<<"Enter the Marks:";
  cin>>marks; 
  if(marks>33){
    cout<<"Pass"<<endl;
  }
  else{
    cout<<"Fail"<<endl;
  }

  marks>33 ? cout<<"Pass"<<endl : cout<<"Fail"<<endl; // One Line Method for if-else. // Ternary Operator
  return 0;
}
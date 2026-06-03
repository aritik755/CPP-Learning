#include<iostream>
using namespace std;
int main(){

  int choice;
  double n, m;

  do{
    cout<<"\n-----MENU-----\n";
    cout<<"1. Additon\n";
    cout<<"2. Subtractiom\n";
    cout<<"3. Multiplication\n";
    cout<<"4. Division\n";
    cout<<"5. Exit\n";
    cout<<"Enter your choice:\n";
    cin>>choice;

    switch(choice){
      case 1: 
      cout<<"Enter two numbers: ";
      cin>>n>>m;
      cout<<"Result = "<<n + m<<endl;
      break;

      case 2: 
      cout<<"Enter two numbers: ";
      cin>>n>>m;
      cout<<"Result = "<<n - m<<endl;
      break;

      case 3: 
      cout<<"Enter two numbers: ";
      cin>>n>>m;
      cout<<"Result = "<<n * m<<endl;
      break;

      case 4: 
      cout<<"Enter two numbers: ";
      cin>>n>>m;
        if(m != 0){
          cout<<"Result = "<<n / m<<endl;
        }
        else{
          cout<<"Invalid Input\n";
        }
      break;

      case 5:
      cout<<"Exiting Program...."<<endl;
      break;

      default:
      cout << "Invalid choice. Please try again.\n";
    }
  }while(choice != 5);

  return 0;
}
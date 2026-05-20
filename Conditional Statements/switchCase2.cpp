#include<iostream>
using namespace std;
int main(){
  char Alphabet;
  cout<<"Enter a Alphabet(LowerCase): ";
  cin>>Alphabet;

  switch(Alphabet){
    case 'a':
    cout<<"It is a Vowel."<<endl;
    break;
    case 'e':
    cout<<"It is a Vowel."<<endl;
    break;
    case 'i':
    cout<<"It is a Vowel."<<endl;
    break;
    case 'o':
    cout<<"It is a Vowel."<<endl;
    break;
    case 'u':
    cout<<"It is a Vowel."<<endl;
    break;

    default:
    cout<<"It is a constonant"<<endl;
  }
  return 0;  
}
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

string decodedString(string &str){

  string result = "";

  //traversing the encoded string
  for(int i = 0; i < str.length(); i++){

    if(str[i] != ']'){
      result.push_back(str[i]);
    }
    else{

      // extract str from result
      string str = "";
      while(!result.empty() && result.back() != '['){
        str.push_back(result.back());
        result.pop_back();
      }

      //reversing the str
      reverse(str.begin(), str.end());

      // reverse the last character from result which is [
      result.pop_back();

      // extract num from result 
      string num = "";
      while(!result.empty() && (result.back() >= '0' && result.back() <= '9')){
        num.push_back(result.back());
        result.pop_back();

      // reversing the num string
      reverse(num.begin(),num.end());

      //convert string to integer
      int int_num = stoi(num);

      //inserting str in result int_num times 
      while(int_num){
        result += str;
        int_num--;
      }
      }
    }
  }
  return result;
}

int main(){

  string str;
  cout<<"Enter a string: ";
  cin>>str;

  cout<<"Decoded String: "<<decodedString(str)<<endl;

  return 0;
}

// Space Complexity -> O(n) where n is length of decoded string.
// Time Complexity -> O(n) where n is length of decoded string.
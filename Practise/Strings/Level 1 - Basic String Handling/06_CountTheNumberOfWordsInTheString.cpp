#include <iostream>
#include <string>
using namespace std;
int main()
{

  string s;
  cout << "Enter a string: ";
  getline(cin, s);

  int count = 1;

  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == ' ')
    {
      count++;
    }
  }

  cout << "Number of Words in the String: " << count << endl;

  return 0;
}
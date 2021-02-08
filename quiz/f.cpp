#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
 string s;
 getline(cin, s);

 int a = 0;
 string b;

 istringstream q(s);
 while (q >> s)
 {
  if (a < s.size())
  {
   b = s;
  }
 }

 cout << b << endl;

 return 0;
}
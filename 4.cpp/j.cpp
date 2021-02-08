#include <iostream>
using namespace std;
long long fox(int a, long long d, long long s){
  if (a == 1)
  {
    return (d + s);
  }
  long long c = d + s;
  return fox(s, c, a-1);
}
int main(){
  int b;
  cin >> b;
  long long x = 0, y = 1;
  if (b == 1)
  {
    cout << "0";
  }
  if (b == 2)
  {
    cout << "1";
  }
  
  
  cout << fox(b - 2, x, y);
}
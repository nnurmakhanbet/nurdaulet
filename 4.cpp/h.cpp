#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;
long long fox(int a, long long d){
  if (a == 0)
  {
    return d;
  }
  d *= a;
  return fox(a - 1, d);
  
}
int main(){
  int b;
  cin >> b;
  long long x = 1;
  cout << fox(b, x);
}
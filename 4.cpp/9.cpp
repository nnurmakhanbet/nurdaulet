#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int fox(int a, int b){
  cout << a + b << endl;
}
int main(){
  int x, y;
  cin << x << y;
  fox( x, y);
}
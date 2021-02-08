#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, x;
  cin >> a;
  set<int>vec;
  for (int i = 0; i < a; i++)
  {
    cin >> x;
    vec.insert(x);
  }
  for ( set<int>::iterator it = vec.begin(); it != vec.end(); it++)
  {
    if ((*it) % 2 != 0)
    {
      cout << *it << " ";
    }
    
  }
  cout << endl;
  return 0;
  
}
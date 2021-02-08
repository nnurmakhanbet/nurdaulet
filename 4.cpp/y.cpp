#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
  string a;
  cin >> a;
  set<int>vec;
  for (int i = 0; i < a.size(); i++)
  {
    vec.insert(towlower(a[i]));
  }
  cout << vec.size() << endl;
  for (set<int>::iterator it = vec.begin(); it != vec.end(); it++)
  {
    cout << (char)*it << " ";
  }
  cout << endl;
  return 0;
}
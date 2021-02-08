#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
using namespace std;
int isPrime(int n){
  if(n == 1)return false;
  for (int i = 2; i < sqrt(n); i++)
  {
    if(n % i == 0)return false;
  }
  return true;
}
int main() {
  int n, x, k, sm = 0;
  cin >> n;
  vector<int>vec;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    vec.push_back(x);
  }
  cin >> k;
  for (int i = 0; i < vec.size(); i++)
  {
    if (vec[i] > k && isPrime(vec[i]))
    {
      sm++;
    }
    
  }
  cout << sm;
}  
  
#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
  int x, y;
  cin >> x;
  int arr[x];
  for (int i = 0; i < x; i++)
  {
    cin >> arr[i];
  }
  cin >> y;
  int binar[32];
  int t;
  for (int i = 0; i < x; i++)
  {
  
    while (arr[i]>0)
    {
    binar[t] = arr[i] % 2;
    arr[i] = arr[i] / 2;
    t++;
    }
    for (int j = t - 1; j >= 0; j--)
    {
    if (y == binar[j])
    {
      cout << "yes" << endl;
    }
    else
    {
      cout << "no" << endl;
    }
    t++;
    
    }
  }
  cout << endl;
  
}

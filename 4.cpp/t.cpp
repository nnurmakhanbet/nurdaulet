#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
    int n, a, b;
    cin >> n;
    vector<int>vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
    
    
      vec.push_back(x);
    }
    cin >> a >> b;
    vec.reserve(vec.begin() + a, vec.begin() + b + 1);
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    

}
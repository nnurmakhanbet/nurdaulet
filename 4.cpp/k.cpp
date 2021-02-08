#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n;
    vector<int>vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    cin >> k;
    if (find(vec.begin(), vec.end(), k) != vec.end() )
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    
    
}
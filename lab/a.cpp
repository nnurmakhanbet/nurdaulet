#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    vector<int>q;
    for (int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        q.push_back(x);
    }
    sort(q.begin(), q.end());
    for (int i = 0; i < a; i++)
    {
        cout << q[i] << endl;
    }
    
}

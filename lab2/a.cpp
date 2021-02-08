#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    pair<int, int>q[2222];
    for (int i = 0; i < a; i++)
    {
        cin >> q[i].first >> q[i].second;
    }
    sort(q, q+a);

    for (int i = 0; i < a; i++)
    {
        cout << q[i].first  << " " << q[i].second << endl;
    }
    
}
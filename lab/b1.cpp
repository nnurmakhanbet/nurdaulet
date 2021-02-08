#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    vector<int>q;
    for (int x, i = 0; i < a; i++)
    {
        cin >> x;
        q.push_back(x);
    }
    reverse(q.begin(), q.end());
    for (int i = 0; i < a; i++)
    {
        cout << q[i];
    }
    
}
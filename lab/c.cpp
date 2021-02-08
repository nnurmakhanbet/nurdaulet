#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    int k, l;
    cin >> k >> l;
    vector<int>q;
    for (int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        q.push_back(x);
    }
    reverse(q.begin() + k, q[l-1]);
    for (int i = 0; i < a; i++)
    {
        cout << q[i] << " ";
    }
    
}
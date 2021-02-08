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
    int k, n = 0;
    cin >> k;
    sort(q.begin(), q.end());
    q.erase(q.begin(), q.end() - k);
    for (int i = 0; i < q.size(); i++)
    {
        n += q[i];
    }
    cout << n;
}
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
    int k;
    cin >> k;
    q.erase(q.begin() + k, q.end());
    for (int i = 0; i < q.size(); i++)
    {
        cout << q[i] << " ";
    }
    
}
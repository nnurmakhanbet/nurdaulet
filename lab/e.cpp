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
    int k, n;
    cin >> k >> n;
    q.erase(q.begin() + k);
    q.erase(q.begin() + n - 1);
    for (int i = 0; i < q.size(); i++)
    {
        cout << q[i] << " ";
    }
    
}
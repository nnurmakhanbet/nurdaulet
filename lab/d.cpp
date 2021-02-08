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
    int k;
    cin >> k;
    q.erase(q.begin() + k);
    for (int i = 0; i < q.size(); i++)
    {
        cout << q[i];
    }
    
}
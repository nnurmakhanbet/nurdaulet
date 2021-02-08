#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    set<int>q;
    for (int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        q.insert(x);
    }
    int sum = 0;
    for (set<int> :: iterator it = q.begin(); it != q.end(); it++)
    {
        sum += *it;
    }
    cout << sum;
}
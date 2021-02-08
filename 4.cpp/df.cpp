#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string fox(string a,int b){
    for (int i = 0; i < b; ++i)
    {
        a[i] = tolower(a[i]);
    }
    return a;
}
int main()
{
    int x;
    cin >> x;
    for (int i = 0; i < x; ++i)
    {
        string q, g;
        cin >> q >> g;
        q = toLow(q, q.size());
        g = toLow(g, g.size());
        for (int j = 0; j < q.size(); ++j)
        {
            if(q[j]=='e'){
                q[j] = 'i';
            }
        }
        for (int j = 0; j < q.size(); ++j)
        {
            if(q[j]=='b'){
                q[j] = 'p';
            }
        }
        for (int j = 0; j < g.size(); ++j)
        {
            if(g[j]=='e'){
                g[j] = 'i';
            }
        }
        for (int j = 0; j < g.size(); ++j)
        {
            if(g[j]=='b'){
                g[j] = 'p';
            }
        }
        if(q == g)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
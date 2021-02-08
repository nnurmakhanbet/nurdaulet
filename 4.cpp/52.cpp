#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;
int main(){
    int a;
    cin >> a;
    set<string>q;
    for (int i = 0; i < a; i++)
    {
        string x;
        cin >> x;
        q.insert(x);

    }
    for(set<string>::iterator it = q.begin(); it != q.end(); it++)
        if((*it) > 1)
            cout << *it << " ";
    cout << endl;
}
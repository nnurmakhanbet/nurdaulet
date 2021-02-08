#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;
string a;
stack<char>q;
int main(){
    cin >> a;
    for (int i = 0; i < (int)a.size(); ++i)
    {
        if ( q[i] == '(')
        {
            q.push('(');
        }
        else if ( q[i] == ')')
        { 
            if (q.size() == 0)
            {
                cout << "no";
            }
            else if (q.top() == ')')
            {
                cout << "no";
            }
            else q.pop();
        }
        
        
    }
    if(q.size() == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
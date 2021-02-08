#include <iostream>
#include <bits/stdc++.h>
#include<map>
using namespace std;
int a;
map<char, int>q;
map<char, int>g;
int main(){
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        char b;
        cin >> b;
        char x, y;
        int w, e;
        cin >> x >> y;;
        q.insert(x, w)++;
        g.insert(y, e)++;
        for (map<char, int> :: iterator it = q.begin(); it !=q.end(); ++it)
        {
            for (map<char, int> :: iterator iter = g.begin(); iter !=g.end(); ++iter)
            {
                if (b == '+')
                {
                    cout << it ->first << '+' << iter->first << it->second + iter->second << endl;
                }
                else if (b == '-')
                {
                    cout << it ->first << '-' << iter->first << it->second - iter->second << endl;
                }
                else if (b == '*')
                {
                    cout << it ->first << '*' << iter->first << it->second * iter->second << endl;
                }
                else if (b == '/')
                {
                    cout << it ->first << '/' << iter->first << it->second / iter->second << endl;
                }
                else
                {
                    cout << "ERROR 404" << endl;
                }
                
            }
            
        }
        
    }

    
}
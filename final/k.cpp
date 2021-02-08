#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    map<string, string>q;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        string x, y;
        cin >> x >> y;
        q.first.insert(x)++;
        q.second.insert(y)++;
    }
    int n = 0;
    for (auto it: q)
    {
        for(int i = 0, i < a, i++){
            do
            {
                if (it[i].second == it[i+n].first)
                {
                    cout << it[i].first << " " << it[i+n].second;
                }
                
            } while (i+n<a);
            
        }
    }
    
    
}
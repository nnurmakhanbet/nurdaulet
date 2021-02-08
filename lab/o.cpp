#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    set<int>q;
    for (int i = 0; i < a.size(); i++)
    {
        q.insert(tolower(a[i]));
    }
    cout << q.size() << endl;
    for(set<int>::iterator it = q.begin(); it != q.end(); it++)
        cout << (char)*it << " ";
    
    
}
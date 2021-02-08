#include <iostream>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>
using namespace std;
int n;
map<string, int>q;
int main(){
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string x;
        cin >> x;
        q[x]++;
    }
    for (map<string, int> :: iterator it = q.begin(); it !=q.end(); ++it)
    {
        if (it ->second > 1)
        {
            cout << it ->first << endl;
            return 0;
        }
        else if (it ->second == 1){
            cout << "Understandable, have a great day" << endl;
            return 0;
        }
       
    }
    
}
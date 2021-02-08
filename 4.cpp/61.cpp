#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;
int a;
map<string, int>q;
int main(){
    cin >> a;
    char x;
    for (int i = 0; i < a; i++)
    {
        
        cin >> x;
        string y;
        int b;
        q.insert(y, b);

    }
    for (map<string, int> :: iterator it = q.begin(); it !=q.end(); ++it)
    {
       if (x == '+')
       {
           cout << it ->first << "+" << it ->first << it ->second + it ->second;
       }
       
        
    }
    
}
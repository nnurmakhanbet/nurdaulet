#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespaces std;
int main(){
    int a;
    int arr[a];
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    int b;
    cin >> b;
    int arc[b];
    for (int i = 0; i < b; i++)
    {
        cin >> arc[i];
    }
    int ans = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; i < b; j++)
        {
            if (arr[i] == arc[j])
            {
                ans++;
            }
            cout << ans << endl;
        }
        
    }
    
    
}
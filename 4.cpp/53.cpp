#include <algorithm>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    int x, y;
    cin >> x >> y;
    char arr[a][a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cin >> arr[i][j];
            
        }
        
    }
    int ans = 0;
    for (int k = x - 1; k < x + 1; k++)
            {
                for (int q = y - 1; q < y + 1; q++)
                {
                    if (arr[k][q] == '.')
                    {
                        ans++;
                    }
                    
                    
                }
                
            }
            
    cout << ans << endl;
    
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fox(char x)
{
    return (int)x - 87;
}
int main(){
    int a;
    cin >> a;
    char x;
    int y;
    for (int i = 0; i < a; i++)
    {
        cin >> x >> y;
        
    }
    
    char arr[8][8];
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {

            if (i == fox(x) && j == y)
            {
                cout << '*';
            }
            else
            {
                cout << "0";
            }
            
            
            
        }
        
    }
    
    
}
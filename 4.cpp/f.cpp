#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fox(int n){
    int g = 0;
    while (n > 0)
    {
        int h = n % 10;
        if(h % 2 == 0)
        {
            g++;
        }
        n = n/10;
        cout << g;
        if (g % 2 == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
        
    }
    
}
int main(){
    int x;
    cin >> x;
    fox(x);
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fox(int a, int b){
    if (b == 1)
    {
        cout << 0;
        return 0;
    }
    else if (b == 2)
    {
        cout << 1;
        return 0;
    }
    else if (b > 2)
    {
        b == fox(a, b-2) - 2 + a * fox(a, b-1); 
        return 0;
    }

}
int main(){
    int k, m;
    cin >> k >> m;
    fox(k, m);
    
    
    
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fox(int a){
    if (a == 0)
    {
        return 1;
    }
    else if(a == 1)
    {
        return 1;
    }
    return fox(a - 1) + fox(a - 2);
    
}
int main(){
    int a;
    cin >> a;
    cout << fox(a);
}
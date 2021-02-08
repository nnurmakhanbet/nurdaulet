#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fox(int a, int n){
    if(n != 0){
        return pow(a, n);
    }
    return 1;
}
int main(){
    int a, n;
    cin >> a >> n;
    cout << fox(a, n);
    }
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    vector <int> v;
    cin>>n>>a>>b;
    for (int i=0; i<n; i++){
        int x;
        cin>> x;
        v.push_back(x);
    }
    reverse (v.begin()+a-1, v.begin()+b);
    for (int i=0; i<v.size(); i++){
        cout<<v[i]<< ' ';
    }
}
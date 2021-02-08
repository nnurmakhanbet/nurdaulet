#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    vector<int>q;
    for (int x, i = 0; i < a; i++)
    {
        cin >> x;
        q.push_back(x);
    }
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < a; i++)
    {
        if (q[i] > n)
        {
            sum++;
        }
        
    }
    cout << sum;
}
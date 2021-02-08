#include <bits/stdc++.h>
using namespace std;
int fox(string a){
    for(int i = 0; i < a.size(); i++){
       a[i] = (char)(219 - (int)a[i]);//Аски код аркылы шыгарамыз
       
    }
    cout << a << endl;
}
int main()
{
    string s;
    cin >> s;
    fox(s);
}
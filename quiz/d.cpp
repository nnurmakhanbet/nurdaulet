#include<bits/stdc++.h>
using namespace std;
int fox(string S, string T){
    for (int i = 0; i < S.size(); i++)
    {
       if(S.substr(i,T.size()) == T)
       {
           cout << i << " ";
       }
    }
}
int main(){
    string S, T;
    cin >> S >> T;
    fox(S, T);
}
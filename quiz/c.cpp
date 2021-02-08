#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;
int fox(string a){
    cout << "The anagram variants for string " << a << " are:" << '\n';
    sort(a.begin(), a.end());
    do
    {
        cout << a << '\n';
    }
    while(next_permutation(a.begin(), a.end()));
}
int main(){
    string a;
    cin >> a;
    fox(a);
}
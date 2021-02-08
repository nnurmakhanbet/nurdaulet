#include<iostream>
using namespace std;
int main(){
    int u, v, t1, t2;
    cin >> u >> v >> t1 >> t2;
    cout << "s=" << (u+v)*t1 + (u-v)*t2;
}

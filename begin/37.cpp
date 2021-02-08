#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int v1, v2, t, s;
    cin >> v1 >> v2 >> t >> s;
    cout << "s=" << abs((v1-v2)*t + s);
}

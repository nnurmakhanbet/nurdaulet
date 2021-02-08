#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x;
    cin >> x;
    int a = pow(x, 2);
    cout << a << endl;
    int s = pow(x, 3);
    cout << s << endl;
    int d = a*s;
    cout << d << endl;
    int f = pow(d, 2);
    cout << f << endl;
    int g = f*d;
    cout << g << endl;
}
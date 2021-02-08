#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    int d = a1*b2 - a2*b1;
    cout << "x=" << (c1*b2 - c2*b1)/d << endl;
    cout << "y=" << (a1*c2 - a2*c1)/d << endl;
}
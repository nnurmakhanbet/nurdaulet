#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x;
    cin >> x;
    cout << "y=" << 4*pow(x-3, 6) - 7*pow(x-3, 3) + 2  << endl;
    cout << "x=" << x;
}
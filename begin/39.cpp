#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a != 0)
    {
        int d = b*b -4*a*c;
        cout << "x1=" << (-b+sqrt(d))/(2*a) << endl;
        cout << "x2=" << (-b-sqrt(d))/(2*a) << endl;
    }
    else
    {
        return 0;
    }
    
}
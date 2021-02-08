#include<iostream>
#include<fu
#include<functional>
using namespace std;
int main(){
    int i; 
    double  x_0, x_1, n, area, dx;
    cout << "Please enter, in order, the limits of integration (x_0 and x_1) and dx" << endl; 
    cin >> x_0 >> x_1 >> dx; 
    n=(x_1-x_0)/dx; 
    i=1; 
    area=0;
    for(i=1;i<=n;i++) 
    area=area+dx*f(x_0+i*dx);
    cout << "The integral in approximately" << area << endl; 
    return 0; 
} 
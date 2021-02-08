#include<iostream>
using namespace std;
double power (double a, int n){
    if (!n)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        double x = power(a, n/2);
        return x*x;
    }
    else if (n % 2 == 1)
    {
        double x = power(a, n/2);
        return x*x*a;
    }
    
    
}
int main(){
    double a;
    int n;
    cin >> a >> n;
    cout << power(a, n);
}
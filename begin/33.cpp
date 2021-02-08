#include <iostream>
using namespace std;
int main(){
    int a, x;
    cin >> x >> a;
    cout << "1 кг стоит " << a/x << endl;
    int y;
    cin >> y;
    cout << y << " кг стоит " << y*(a/x) << endl;
}
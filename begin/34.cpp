#include <iostream>
using namespace std;
int main(){
    int a, x, y, b;
    cin >> x >> a >> y >> b;
    cout << "1 kg shokoloda " << a/x << endl;
    cout << "1 kg irisok " << b/y << endl;
    int k = a/x, h = b/y;
    if (k == h)
    {
        cout << "bagalary birdey";
    }
    else if (k > h)
    {
        cout << "shokolad " << k/h << "ese kymbat";
    }
    else if (k < h)
    {
        cout << "irisok " << h/k << "ese kymbat";
    }
}
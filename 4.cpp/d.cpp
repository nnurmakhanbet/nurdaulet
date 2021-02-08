#include <iostream>
using namespace std;
int fox(int n){
    int a = 0;
    while (n != 0)
    {
        a = a + n % 10;
        n = n/10;
    }
    cout << a << endl;
    
}
int main(){
    int x;
    cin >> x;
    fox(x);
}
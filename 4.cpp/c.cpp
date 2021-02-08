#include <iostream>
#include <map>


using namespace std;
int a, n;
map<int, int> q;
int main() {
    cin >> a >> n;
    for (int i = 0; i < a; ++i)
    {
        int x;
        cin >> x;
        q[x]++;
    }
    cout << q[n] << "\n";
    return 0;

}
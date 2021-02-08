#include <iostream>
using namespace std;
int main()
{
    int n, a[35];
    int max = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (a[i]>max)
            max = a[i];
    }
    cout << max;
    system("pause");
    return 0;
}
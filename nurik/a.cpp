#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < a - 1; i++)
    {
        if (arr[i] >= arr[i+1])
        {
            cout << "NO";
            return 0;
        }
        
    }
    cout << "YES";
}
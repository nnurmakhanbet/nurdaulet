#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    int arr[a][a];
    int x = 1;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i + j == a - 1)
            {
                cout << x;
                x++;
            }else
            {
               cout << '.';
            }
            
        }
        cout << endl;
    }
    
}
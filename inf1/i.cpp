#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            arr[0][j] = 1;
            arr[i][0] = 1;
            if (i > 0 && j > 0)
            {
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
            }
            
        }
        
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
}
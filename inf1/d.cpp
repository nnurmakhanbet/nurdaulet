#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, max = 0, imax = 0, jmax = 0;
    cin >> a >> b;
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr[a][b];
        }
        
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                imax = i;
                jmax = j;
            }
            
        }
        
    }
    cout << max << endl << imax << " " << jmax;
}
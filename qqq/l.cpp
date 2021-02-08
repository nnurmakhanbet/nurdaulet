#include<iostream>
using namespace std;
int main(){
    int a, b, sum = 0;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    cin >> b;
    for (int i = 0; i < a; i++)
    {
        if (arr[i] > b)
        {
            sum++;
        }
        
    }
    cout << sum + 1;

}
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
    if (a % 2 != 0)
    {
        for (int i = 0; i < a - 1; i++)
        {
            swap(arr[0], arr[1]);
            if(i % 2 == 0){
                swap(arr[i], arr[i+1]);
            }
            
        }
        for (int i = 0; i < a - 1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << arr[a - 1];
    }
    else
    {
        for (int i = 0; i < a; i++)
        {
            swap(arr[0], arr[1]);
            if(i % 2 == 0){
                swap(arr[i], arr[i+1]);
            }
            
        }
        for (int i = 0; i < a; i++)
        {
            cout << arr[i] << " ";
        }
        
    }
    
    
}
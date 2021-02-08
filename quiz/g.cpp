#include<iostream>
using namespace std;
int main(){
    int n, a, b, sum = 0, sum1 = 0;
    cin >> n >> a >> b;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            sum++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            sum1++;
        }
        
    }
    if (a*sum >= b*sum1)
    {
        cout << b * sum1 << endl;
    }
    else if(a*sum < b*sum1)
    {
        cout << a * sum << endl;
    }
    return 0;
    
    
}
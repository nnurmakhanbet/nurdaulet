#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fox(int a,int b 2)
{
    if(a < 2){ 
        return 0;//viydet nepravilno
    }
    else if(a % b == 0)
    {
        cout << b << " ";
        fox(a / b, b);//esly budet delitsya povtoriayem
    }
    else{ 
        fox(a, b + 1);//yly reshaem cherez b = 3
    }
}
int main ()
{
    int x;
    cin >> x;//добавляем числу
    fox(x);
}
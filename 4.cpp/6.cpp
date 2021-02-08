#include<iostream>
#include<string.h>
#include<map>
#include<ctype.h>
using namespace std;
int fox(string a, string b){
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'i')
        {
            a[i] = 'e';
        }
        if (a[i] == 'p')
        {
            a[i] = 'b';
        }
        
        
        a[i] = tolower(a[i]);

    }
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == 'i')
        {
            b[i] = 'e';
        }
        if (b[i] == 'p')
        {
            b[i] = 'b';
        }
        b[i] = tolower(b[i]);

    }
    if (a == b)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << " no" << endl;
    }
    
    
    
    
    
}
int main(){
    int x;
    cin >> x;
    for (int i = 0; i < x; ++i)
    {
        string a, b;
        cin >> a >> b;
        fox(a, b);

    }
    
}
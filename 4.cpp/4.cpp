#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter integer:" ;
    cin >> n;
    if ( n == 0 ){
        cout << n << " is none";
    }
    else if ( n % 2 == 0 ){
        cout << n;
        if ( n > 0 && n < 5 )
        {
            cout << n << " is not super";
        }
        else if ( n > 5 && n < 21 ){
            cout << n << " is super";
        }
        else{
            cout << n << " is not super";
        }
        }
    else {
        cout <<  n << " is super";
    }
}
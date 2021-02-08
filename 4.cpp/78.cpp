#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int a;
    cin << a;
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum = i * (i + 1);
    }
    cout << sum << endl;
}
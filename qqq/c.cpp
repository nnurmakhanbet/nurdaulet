#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1000; i < 10000; i++){
        int sum;
        sum = i/1000 + i/100%10+ i/10%10 + i%10;
        if(sum == n){
            cout << i << endl;
        }
    }
    return 0;
}
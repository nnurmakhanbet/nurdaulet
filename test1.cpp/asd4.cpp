#include<iostream>
using namespace std;
bool asd (bool x, bool y){
    if(x==y)return 0;
    return 1;

    

}
int main(){
    bool x, y;
    cin >> x >> y;
    cout << asd(x, y);
}
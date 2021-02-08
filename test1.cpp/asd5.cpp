#include<iostream>
using namespace std;
bool Election(bool x, bool y, bool z){
    if (x==y && x==0)return 0;
    else if(x==z && x==0)return 0;
    else if (z==y && z==0)return 0;
    return 1;
    
}
int main(){
    bool x, y, z;
    cin >> x >> y >> z;
    cout << Election(x, y, z);
}
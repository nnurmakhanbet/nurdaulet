#include <cmath>
#include <iostream>
#include <locale>
using namespace std;
bool fox(int n) {
	int p=0;
	float end = sqrt((float)n);
    for (int i=2; i <= end; ++i) {
        if (n%i == 0) {
            p=1;
        }
    }
    if (p==0) return 1; 
    else return 0;
}
int main() {
    int n;
    cin >> n;
    int t=2;
    while (true) {
    	if (fox(t) == 1 && fox(n-t) == 1) {
   			cout<<t<<" "<<n-t;
   			return 0;
		} 
        else t++;
		if (t==n-2){
			break;
		}
	}
    
}
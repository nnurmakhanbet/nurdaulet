#include <cmath>
#include <iostream>
#include <string>
#include <locale>
int reverse(int n) {
	int k, rev = 0;
	while (n!=0) {
		k = n % 10;
		rev = rev*10 + k;
		n/=10;
	}
	return rev;	
} 

using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    for (int i=0; i < n; i++){
    cin >> a >> b;
    cout << reverse(reverse(a)+reverse(b))<<endl;
    	
	}
        
}
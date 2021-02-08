#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,n,a[1007],b[10000];
	cin>>t;
	for (int j=0; j<t; j++) {
		cin>>n;
		for (int i=0; i<n; i++){
			cin>>a[i];
			b[a[i]] = i;			
		}
		sort(a,a+n);
		int y=0;
		for (int k=0; k<n; k++) {
			if (a[k] != a[k-1] && a[k] != a[k+1]) {
				cout<<b[a[k]]+1<<endl;
				y=1;
				break;
				
			}
            
		}
		if (y==0) cout<<"ZA WARUDO"<<endl;
	}	
}
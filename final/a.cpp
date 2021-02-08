#include <bits/stdc++.h>
using namespace std;
int fox(int& n, int *x, int& t){
for (int i=0; i<n; i++) {
		cin>>t;
			if (t/100<=x[7]){
			x[7]=x[7]-t/100;
			t=t%100;
			}
			if (t/50<=x[6]){
			x[6]=x[6]-t/50;
			t=t%50;
			}
			
			if (t/20<=x[5]){
			x[5]=x[5]-t/20;
			t=t%20;
			}
			
			if (t/10<=x[4]){
				x[4]=x[4]-t/10;
				t=t%10;	
			}
			
			if (t/5<=x[3]){
			x[3]=x[3]-t/5;	
				t=t%5;
			}
			
			if (t/2<=x[2]){
			x[2]=x[2]-t/2;
			t=t%2;
			}
			
			if (t/1<=x[1]){
			x[1]=x[1]-t;
			}
				
			if (t==0) cout<<"Transaction accepted!"<<endl;
             else cout<<"Transaction stopped!"<<endl;		
		
	}
}
int main() {
	int n, x[7],t;
	for (int i=1; i<=7; i++) {
		cin>>x[i];
	}
	cin>>n;
	fox(n, x, t);
}
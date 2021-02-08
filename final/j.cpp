#include <bits/stdc++.h>
using namespace std;
int main() {
	string s,l;
	int t,k,p;
	cin>>s;
	cin>>l;
	if (s.length() != l.length()) {
		cout<<"Understandable have a nice day";
		return 0;
	}
	for (int i=0; i<l.length(); i++){
		if (l[i]==s[0]) {
			t=i;
			p=0;
			k=abs(t-p);
			while (true) {
				if (s[p] == l[t]) {
					p++;
					if (t<(l.length())-1) {
						t++;
					}else {
						t=0;
					}					
				} else break;		
			}
			if (p==s.length()) {
				cout<<k;
				return 0;
			}
		}
	}
	cout<<"Understandable have a nice day";
}
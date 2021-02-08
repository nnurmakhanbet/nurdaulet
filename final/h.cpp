#include<bits/stdc++.h> 
using namespace std; 

string q(string s, string k) 
{ 
	int x = s.size(); 

	for (int i = 0; ; i++) 
	{ 
		if (x == i) 
			i = 0; 
		if (k.size() == s.size()) 
			break; 
		k.push_back(k[i]); 
	} 
	return k; 
} 

string c(string s, string k) 
{ 
	string c; 

	for (int i = 0; i < s.size(); i++) 
	{ 
		char x = (s[i] + k[i]) % 26; 
		x += 'a'; 
		c.push_back(x); 
	} 
	return c; 
} 



int main() 
{ 
	string a, k2;
	cin >> a;
	cin >> k2;
	
	string k = q(a, k2);
	cout << c(a, k); 
 	
	return 0; 
}
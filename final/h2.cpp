#include<bits/stdc++.h> 
using namespace std; 

string generateKey(string str, string key) 
{ 
	int x = str.size(); 

	for (int i = 0; ; i++) 
	{ 
		if (x == i) 
			i = 0; 
		if (key.size() == str.size()) 
			break; 
		key.push_back(key[i]); 
	} 
	return key; 
} 

string c(string str, string key) 
{ 
	string cipher_text; 

	for (int i = 0; i < str.size(); i++) 
	{ 
		char x = (str[i] + key[i])%26; 
		x += 'a'; 
		cipher_text.push_back(x); 
	} 
	return cipher_text; 
} 



int main() 
{ 
	string s,key2,cipherS;
	cin>>s;
	cin>>key2;
	
	string key = generateKey(s, key2);
	cout <<cipherText(s, key); 
 	
	return 0; 
}
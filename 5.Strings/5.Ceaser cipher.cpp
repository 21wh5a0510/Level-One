#include<bits/stdc++.h>
using namespace std;
string encrypt(string s,int k)
{
	string encrypted="",pos="";
	int length=s.length();
	for(int i=0;i<length;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			pos=(s[i]-'a'+k)%26+'a';
			encrypted+=pos;
		}
		else if(s[i]>='A'&&s[i]<='Z')
		{
			pos=(s[i]-'A'+k)%26+'A';
			encrypted+=pos;
		}
		else
		{
			encrypted+=s[i];
		}
	}
	return encrypted;
}
string decrypt(string encrypt,int k)
{
	string decrypted="",pos="";
	int length=encrypt.length();
	for(int i=0;i<length;i++)
	{
		if(encrypt[i]>='a'&&encrypt[i]<='z')
		{
			pos=(encrypt[i]-'a'-k)%26+'a';
			decrypted+=pos;
		}
		else if(encrypt[i]>='A'&&encrypt[i]<='Z')
		{
			pos=(encrypt[i]-'A'-k)%26+'A';
			decrypted+=pos;
		}
		else
		{
			decrypted+=encrypt[i];
		}
	}
	return decrypted;
}
int main()
{
	string inp,enc="";
	int key;
	cout<<"Enter String:";
	cin>>inp;
	cout<<"Enter key:";
	cin>>key;
	enc=encrypt(inp,key);
	cout<<"Encrypted message is "<<enc<<"\n";
	cout<<"Decrypted message is "<<decrypt(enc,key);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,encrypt="",pos,decrypt="";
	int k;
	cout<<"Enter String:";
	cin>>s;
	int length=s.length();
	cout<<"Enter key";
	cin>>k;
	for(int i=0;i<length;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			pos=(s[i]-'a'+k)%26+'a';
			encrypt+=pos;
		}
		else if(s[i]>='A'&&s[i]<='Z')
		{
			pos=(s[i]-'A'+k)%26+'A';
			encrypt+=pos;
		}
		else
		{
			encrypt+=s[i];
		}
	}
	cout<<"Encrypted message is "<<encrypt<<"\n";
	for(int i=0;i<length;i++)
	{
		if(encrypt[i]>='a'&&encrypt[i]<='z')
		{
			pos=(encrypt[i]-'a'-k)%26+'a';
			decrypt+=pos;
		}
		else if(encrypt[i]>='A'&&encrypt[i]<='Z')
		{
			pos=(encrypt[i]-'A'-k)%26+'A';
			decrypt+=pos;
		}
		else
		{
			decrypt+=encrypt[i];
		}
	}
	cout<<"Decrypted message is "<<decrypt<<"\n";
	return 0;
}

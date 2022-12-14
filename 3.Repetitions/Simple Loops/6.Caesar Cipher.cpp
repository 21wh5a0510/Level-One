/*One of the first known examples of encryption was used by Julius Caesar. Caesar needed to provide written instructions to his generals,
but he didn't want his enemies to leam his plans if the message slipped into their hands. As a result, he developed what later became known 
as the Caesar cipher. The idea behind this cipher is simple (and as such, it provides no protection against modem code breaking techniques).
Each letter in the original message is shifted by 3 places. As a result, A becomes D, B becomes E, C becomes F, D becomes G, etc.
The last three letters in the alphabet are wrapped around to the beginning: X becomes A, Y becomes B and Z becomes C. Non-letter characters 
are not modified by the cipher.Write a program that implements a Caesar cipher. Allow the user to supply the message and the shift amount, 
and then display the shifted message. Ensure that your program encodes both uppercase and lowercase letters. Your program should also support 
negative shift values so that it can be used both to encode messages and decode messages.*/

#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	string s,encrypt="",pos,decrypt="";
	int k;
	cout<<"Enter String:";
	cin>>s;
	cout<<"Enter key";
	cin>>k;
	for(int i=0;i<s.length();i++)
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
	for(int i=0;i<encrypt.length();i++)
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
	cout<<"decrypted message is "<<decrypt<<"\n";
	return 0;
}

#include<iostream>
using namespace std;

int findLengthofLongPal(string s)
{
	int freq[58]={0};
	for(int i=0;i<s.length();i++)
	{
		char c=s[i];
		if(c>='a' && c<='z')
			++freq[c-'a'+6];
		else
			++freq[c-'A'];
	}
	int count=0,maxodd=0;
	for(int i=0;i<52;i++)
	{
		if(freq[i]%2==0)
		{
			count+=freq[i];
		}
		else
		{
//			noddfreq++;
			maxodd=max(maxodd,freq[i]);
			count+=freq[i]-1;
			//maxodd=max(maxodd,freq[i]);
		}
	}
	if(maxodd>=1)
		++count;
	return count;//+(noddfreq%2==1?1:0);
}
int main()
{
	string s;
	cin>>s;
	cout<<findLengthofLongPal(s);
	return 0;
}

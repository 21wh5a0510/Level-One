#include<bits/stdc++.h>
using namespace std;

bool checkPassword(string s)
{
	if(s.length()==8)
	{
		int x=0,y=0,z=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]>='A'&&s[i]<='Z')
			{
				x=1;
			}
			if(s[i]>='a'&&s[i]<='z')
			{
				y=1;
			}
			if(s[i]>='0'&&s[i]<='9')
			{
				z=1;
			}
		}
		if(x&&y&&z)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
int main()
{
	string s;
	cout<<"Enter a Password:";
	cin>>s;
	if(checkPassword(s))
	{
		cout<<"True";
	}
	else
	{
		cout<<"False";
	}
	return 0;
}

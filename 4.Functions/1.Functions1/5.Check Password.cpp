#include<bits/stdc++.h>
using namespace std;

bool checkPassword(string s)
{
	if(s.length()>=8)
	{
		int w=0,x=0,y=0,z=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]>='A'&&s[i]<='Z')
			{
				x=1;
			}
			else if(s[i]>='a'&&s[i]<='z')
			{
				y=1;
			}
			else if(s[i]>='0'&&s[i]<='9')
			{
				z=1;
			}
			else
			{
				w=1;
			}
		}
		if(x&&y&&z&&w)
		{
			return false;
		}
		else
		{
			return true;
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

/*Using all Functions
#include<bits/stdc++.h>
using namespace std;

bool isUpper(char c)
{
	if(c>='A' && c<='Z')
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool isLower(char c)
{
	if(c>='a' && c<='z')
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool isDigit(char c)
{
	if(c>='0' && c<='9')
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool checkPassword(string s)
{
	if(s.length()>=8)
	{
		int x=0,y=0,z=0;
		for(int i=0;i<s.length();i++)
		{
			if(isUpper(s[i]))
			{
				x=1;
			}
			if(isLower(s[i]))
			{
				y=1;
			}
			if(isDigit(s[i]))
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
*/

#include<bits/stdc++.h>
using namespace std;
bool isInteger(string s,int n)
{
	for(int i=n;i<s.length();i++)
		{
			if(s[i]>='0'&&s[i]<='9'||s[i]==' ')
			{
				continue;
			}
			else
			{
				return false;
			}
		}
		return true;
}
void isValid(string str,int a)
{
	if(isInteger(str,a))
	{
		cout<<"The string represents integer";
	}
	else
	{
		cout<<"The string doesnot represents integer";
	}
}
int main()
{
	string str;
	cout<<"Enter string:";
	getline(cin,str);
	if(str.length()>=1)
	{
		if(str[0]=='+'||str[0]=='-'||str[0]==' ')
		{
			int a=1;
			isValid(str,a);
		}
		else
		{
			int a=0;
			isValid(str,a);
		}
	}
	else
	{
		cout<<"Enter string of atleast length 1";
	}
	return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
bool isInteger(string s)
{
	if(s[0]=='+'||s[0]=='-'||s[0]==' ')
	{
		for(int i=1;i<s.length();i++)
		{
			if(s[i]>='0'&&s[i]<='9'||s[i]==' ')
			{
				continue;
			}
			else
			{
				return false;
			}
		}
		return true;
	}
	else
	{
		for(int i=0;i<s.length();i++)
		{
			if(s[i]>='0'&&s[i]<='9'||s[i]==' ')
			{
				continue;
			}
			else
			{
				return false;
			}
		}
		return true;
	}
}
int main()
{
	string str;
	cout<<"Enter string:";
	getline(cin,str);
	if(str.length()>=1)
	{
		if(isInteger(str))
		{
			cout<<"The string represents integer";
		}
		else
		{
			cout<<"The string doesnot represent integer";
		}
	}
	else
	{
		cout<<"Enter string of atleast length 1";
	}
	return 0;
}
*/

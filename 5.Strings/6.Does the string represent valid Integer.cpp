#include<bits/stdc++.h>
using namespace std;
bool isInteger(string s)
{
	string result="";
	int length=s.length();
	for(int i=1;i<length;i++)
	{
		if(s[i]==' '||(s[i]>='0'&&s[i]<='9')||s[0]=='+'||s[0]=='-')
		{
			result+=s[i];
		}
		else
		{
			return false;
		}
	}
}
int main()
{
	string integer;
	cin>>integer;
	cout<<integer<<"\n";
	if(isInteger(integer))
	{
		cout<<"True";
	}
	else
	{
		cout<<"False";
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if(a==0 && b==0)
	{
		cout<<"Not a Moose";
	}
	else if(a==b)
	{
		cout<<"Even "<<a+b;
	}
	else
	{
		if(a>b)
		{
			cout<<"Odd "<<a+a;
		}
		else
		{
			cout<<"Odd "<<b+b;
		}
	}
	return 0;
}

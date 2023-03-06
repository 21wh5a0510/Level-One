#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,m;
	cin>>a>>b>>c>>m;
	if((a>0&&b>0&&c>0)&&(a+b+c>=m))
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}

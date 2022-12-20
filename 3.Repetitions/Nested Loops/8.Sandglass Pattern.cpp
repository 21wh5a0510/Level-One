#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Number:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		for(int k=n;k>i;k--)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<n;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=i;k++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	return 0;
}

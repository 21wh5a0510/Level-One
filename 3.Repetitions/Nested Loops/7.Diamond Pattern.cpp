#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Number:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			cout<<" ";
		}
		for(int k=0;k<2*i+1;k++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=n-1;i>0;i--)
	{
		for(int j=n;j>i;j--)
		{
			cout<<" ";
		}
		for(int k=0;k<2*i-1;k++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}

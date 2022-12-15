#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
		for(int k=1;k<=i;k++)
		{
			cout<<"  ";
		}
	}
	return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<=i-1;k++)
		{
			cout<<"  ";	
		}
		for(int j=i;j<=n;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
}*/

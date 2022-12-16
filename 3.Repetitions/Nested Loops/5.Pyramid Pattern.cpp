#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n-i;j++)
		{
			cout<<"  ";
		}
		for(int k=0;k<=2*i;k++)
		{
			cout<<"* ";
		}
		cout<<"\n";
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
	for(int i=0;i<n;i++)
	{
		for(int j=n;j>i;j--)
		{
			cout<<"  ";
		}
		for(int k=1;k<=2*i+1;k++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	return 0;
}
*/

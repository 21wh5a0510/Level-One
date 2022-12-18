#include<bits/stdc++.h>
using namespace std;

bool isPerfect(int n)
{
	int sum=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(sum==n)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int number;
	cout<<"Enter Number:";
	cin>>number;
	if(isPerfect(number))
	{
		cout<<"True\n";
	}
	else
	{
		cout<<"False\n";
	}
	cout<<"The Perfect Numbers between 1 to 10000 is ";
	for(int i=1;i<=10000;i++)
	{
		if(isPerfect(i))
		{
			cout<<i<<" ";
		}
	}
	return 0;
}

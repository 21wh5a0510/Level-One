#include<bits/stdc++.h>
using namespace std;
void FormattingNames(string arr1[],int size)
{
	for(int i=0;i<size;i++)
	{
		if(i==size-1)
		{
			cout<<" and "<<arr1[i];
		}
		else if(i==size-2)
		{
			cout<<arr1[i];
		}
		else
		{
			cout<<arr1[i]<<", ";
		}
	}
}
int main()
{
	int n;
	cin>>n;
	string arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	FormattingNames(arr,n);
	return 0;
}

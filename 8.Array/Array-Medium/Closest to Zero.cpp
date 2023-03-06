#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int Closest(int a[],int size)
{
	int tmp=a[0];
	for(int i=1;i<size;i++)
	{
		if(abs(a[i])<abs(tmp))
		{
			tmp=a[i];
		}
	}
	return tmp;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<Closest(arr,n);
	return 0;
}

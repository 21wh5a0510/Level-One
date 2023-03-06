#include<bits/stdc++.h>
using namespace std;
int maxPairSum(int arr1[],int size)
{
	int sum=0,tmp;
	for(int i=0;i<size;i++)
	{
		tmp=arr1[i]+arr1[i+1];
		if(tmp>sum)
		{
			sum=tmp;
		}
	}
	return sum;
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
	cout<<maxPairSum(arr,n);
	return 0;
}

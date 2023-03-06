#include<bits/stdc++.h>
using namespace std;
int maxPairDiff(int arr1[],int size)
{
	int min=arr1[0],max=arr1[0];
	for(int i=1;i<size;i++)
	{
		if(arr1[i]<min)
		{
			min=arr1[i];
		}
		if(arr1[i]>max)
		{
			max=arr1[i];
		}
	}
	return max-min;
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
	cout<<maxPairDiff(arr,n);
	return 0;
}

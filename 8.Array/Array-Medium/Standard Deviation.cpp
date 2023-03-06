#include<bits/stdc++.h>
using namespace std;
float StandardDeviation(int a[],int size)
{
	int mean=0;
	float b=0.0;
	for(int i=0;i<size;i++)
	{
		mean+=a[i];
	}
	mean/=size;
	for(int i=0;i<size;i++)
	{
		b+=pow((a[i]-mean),2);
	}
	b/=(size-1);
	return sqrt(b);
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
	cout<<setprecision(3)<<StandardDeviation(arr,n);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int* SwapInversion(int arr1[])
{
	while(1)
	{
		for(int i=0;i<5;i++)
		{
			if(arr1[i]>arr1[i+1])
			{
				int tmp=arr1[i];
				arr1[i]=arr1[i+1];
				arr1[i+1]=tmp;
			}
			for(int i=0;i<5;i++)
			{
				cout<<arr1[i]<<" ";
			}
			cout<<"\n";
			if(arr1[0]==1 && arr1[1]==2 && arr1[2]==3 && arr1[3]==4 && arr1[4]==5)
			{
				return arr1;
			}
		}
	}
}
int main()
{
	int arr[4];
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	SwapInversion(arr);
//	for(int i=0;i<5;i++)
//	{
//		cout<<arr[i]<<" ";
//	}
	return 0;
}


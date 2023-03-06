//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cout<<"Enter n:";
//	cin>>n;
//	for(int i=n;i>0;i--)
//	{
//		for(int k=n;k>i;k--)
//		{
//			cout<<"  ";
//		}
//		for(int j=1;j<=2*i-1;j++)
//		{
//			cout<<"* ";
//		}
//		cout<<"\n";
//	}
//	return 0;
//}


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<i;k++)
		{
			cout<<"  ";
		}
		for(int j=i;j<2*n-i-1;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	return 0;
}

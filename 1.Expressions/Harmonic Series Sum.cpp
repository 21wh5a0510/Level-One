#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	float sum=0,a=1;
	for(int i=0;i<n;i++)
	{
		sum=sum+(1/a);
		a++;
	}
	cout<<fixed<<setprecision(3)<<sum;
	return 0;
}

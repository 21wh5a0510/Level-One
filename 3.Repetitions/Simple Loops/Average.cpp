#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,a=0;
	float sum=0;
	while(cin>>num)
	{
		if(num==0)
		{
			break;
		}
		else
		{
			sum+=num;
			a++;
		}
	}
	cout<<setprecision(3)<<sum/a;
	return 0;
}

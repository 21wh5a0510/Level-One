#include<bits/stdc++.h>
using namespace std;
double approximatePI(int n)
{
	double sign=1,s=0,d=2;
	for(int i=1;i<=n;i++)
	{
		s+=1/(d*(d+1)*(d+2))*sign;
		d+=2;
		sign*=-1;
	}
	return s*4+3;
}
int main()
{
	int num;
	cout<<"Enter Number:";
	cin>>num;
	cout<<"The Approximate is "<<approximatePI(num);
	return 0;
}

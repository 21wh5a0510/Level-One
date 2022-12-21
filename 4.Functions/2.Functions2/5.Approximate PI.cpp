#include<bits/stdc++.h>
using namespace std;
double approximatePI(int n)
{
	int sign=1,s=0;
	for(int i=1,d=2;i<=n;i++,d+2)
	{
		s+=1/(d*(d+1)*(d+2))*sign;
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

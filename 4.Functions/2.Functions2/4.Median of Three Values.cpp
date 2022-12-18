#include<bits/stdc++.h>
using namespace std;
float medianOfThree(float x,float y,float z)
{
	if(x>y && x>z)
	{
		if(y>z)
		{
			return y;
		}
		else
		{
			return z;
		}
	}
	else if(y>x && y>z)
	{
		if(x>z)
		{
			return x;
		}
		else
		{
			return z;
		}
	}
	else
	{
		if(x>y)
		{
			return x;
		}
		else
		{
			return y;
		}
	}
}
int main()
{
	float a,b,c;
	cout<<"Enter Three Numbers:";
	cin>>a>>b>>c;
	cout<<"The median of three numbers is "<<medianOfThree(a,b,c);
	return 0;
}

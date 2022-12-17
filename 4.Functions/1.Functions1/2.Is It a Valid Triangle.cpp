#include<bits/stdc++.h>
using namespace std;

bool isValidTriangle(float a,float b,float c)
{
	if(a<=0||b<=0||c<=0)
	{
		return false;
	}
	else
	{
		if(a>=(b+c)||b>=(a+c)||c>=(a+b))
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}
int main()
{
	float s1,s2,s3;
	cout<<"Enter sides:";
	cin>>s1>>s2>>s3;
	if(isValidTriangle(s1,s2,s3))
	{
		cout<<"The Triangle is Valid";
	}
	else
	{
		cout<<"The Triangle is Not Valid";
	}
	return 0;
}

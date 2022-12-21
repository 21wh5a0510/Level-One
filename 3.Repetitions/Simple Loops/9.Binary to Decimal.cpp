#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int dec,sum=0,a=0;
	cout<<"Enter Binary Number:";
	cin>>s;
	int length=s.length();
	for(int i=length-1;i>=0;i--)
	{
		if(s[i]-'0'==1)
		{
			dec=pow(2,a);
			a++;
			sum+=dec;
		}
		else if(s[i]-'0'==0)
		{
			a++;
		}
		else
		{
			cout<<"Please Enter Correct Binary Number";
			return 0;
		}
	}
	cout<<sum;
	return 0;
}

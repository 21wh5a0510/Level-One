#include<bits/stdc++.h>
using namespace std;

string rolldice(int a,int b,int c)
{
	if(a==b && b==c && c==a)
	{
		return "Yahoo";
	}
	else
	{
		return "Try Again";
	}
}
int main()
{
	srand(time(0));
	int d1,d2,d3;
	d1=rand()%6+1;
	d2=rand()%6+1;
	d3=rand()%6+1;
	cout<<rolldice(d1,d2,d3);
	cout<<"\n"<<d1<<"\n"<<d2<<"\n"<<d3;
	return 0;
}

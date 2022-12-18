#include<bits/stdc++.h>
using namespace std;

bool isCollinear(float x1,float x2,float y1,float y2,float z1,float z2)
{
	float slope1,slope2,slope3;
	slope1=(y2-x2)/(y1-x1);
	slope2=(z2-y2)/(z1-y1);
	slope3=(x2-z2)/(x1-z1);
	if(slope1==slope2 && slope2==slope3 && slope3==slope1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	float a,b,c,d,e,f;
	cout<<"Enter Points:";
	cin>>a>>b>>c>>d>>e>>f;
	if(isCollinear(a,b,c,d,e,f))
	{
		cout<<"True";
	}
	else
	{
		cout<<"False";
	}
	return 0;
}

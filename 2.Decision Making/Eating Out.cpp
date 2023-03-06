#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,a,b,c;
	cin>>m>>a>>b>>c;
	if((a>=m || b>=m || c>=m))
	{
		cout<<"ImPossible";
	}
	else
	{
		cout<<"Possible";
	}
	return 0;
}

#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	string result="";
	int q;
	cin>>q;
	while(q!=0)
	{
		int r=q%2;
		result=to_string(r)+result;
		q=q/2;
	}
	cout<<result;
	return 0;
}

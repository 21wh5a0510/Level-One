#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cout<<"Enter x:";
	cin>>x;
	int guess;
	guess=x/2;
	float a=pow(10,-3);
	while(abs(guess*guess)-x>=a)
	{
		guess=(guess+(x/guess))/2;
	}
	cout<<guess;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
char encode(int a)
{
	return char(a);
}
int decode(char ch)
{
	return int(ch);
}
int main()
{
	int n;
	char c;
	cout<<"Enter a Number:";
	cin>>n;
	cout<<"Enter a character:";
	cin>>c;
	cout<<encode(n)<<"\n";
	cout<<decode(c);
}

#include<bits/stdc++.h>
using namespace std;
string randompassword()
{
	string pwd="";
	int length=rand()%4+7;
	for(int i=0;i<length;i++)
	{
		char c=rand()%94+33;
		pwd+=c;
	}
	return pwd;
}
int main()
{
	srand(time(0));
	cout<<randompassword();
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int rolldicefor6()
{
	int count=0;
	for(int i=0;i<10;i++)
	{
		int dice=rand()%6+1;
		if(dice==6)
		{
			cout<<dice<<"\n";
			count++;
		}
		else
		{
			cout<<dice<<"\n";
		}
	}
	return count;
}
int main()
{
	srand(time(0));
	cout<<"The number of times 6 occured are "<<rolldicefor6();
	return 0;
}

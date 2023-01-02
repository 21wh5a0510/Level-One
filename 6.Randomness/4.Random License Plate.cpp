#include<bits/stdc++.h>
using namespace std;
string randomLicensePlate()
{
	int r=rand()%2+6;
	string res="";
	if(r==6)
	{
		for(int i=0;i<3;i++)
		{
   			char c=rand()%25+65;
   			res+=c;
   		}
		for(int i=3;i<6;i++)
		{
   			int n=rand()%10+48;
   			res+=n;
   		}
	}
	else
	{
   		for(int i=0;i<4;i++)
		{
   			int p=rand()%10+48;
   			res+=p;
   		}
   		for(int i=4;i<7;i++)
		{
   			char d=rand()%25+65;
   			res+=d;
   		}
	}
	return res;
}
int main()
{
	srand(time(0));
	cout<<"The Random License Plate is "<<randomLicensePlate();
	return 0;	
}

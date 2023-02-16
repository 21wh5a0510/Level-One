#include<bits/stdc++.h>
using namespace std;

int getNumOfFlips()
{
	int prev=-1;
	int nflips=0;
	int current=rand()%2+1;
	while(true)
	{
		nflips++;
//		cout<<"nflips "<<nflips<<"\n\n";
		if((prev==1 && current==1) || (prev==0&&current==0))
		{
			return nflips;
		}
		prev=current;
//		cout<<"prev="<<prev<<"\n";
		current=rand()%2+1;
	}
	return 0;
}
int main()
{
	srand(time(0));
	int min=100000000,max=0,avg=0,result;
	for(int i=0;i<10;i++)
	{
		int n;
		n=getNumOfFlips();
		if(n<min)
		{
			min=n;
//			cout<<"min is "<<min<<"\n\n";
		}
		else if(n>=max)
		{
			max=n;
//			cout<<"max is "<<max<<"\n\n";
		}
		avg=avg+n;
//		cout<<"Avg "<<avg<<"\n\n";
	}
	cout<<"minimum is "<<min<<"\n"<<"maximum is "<<max<<"\n";
	cout<<"average is "<<avg/10.0;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

string getComputerMove()
{
	srand(time(0));
	int a=rand()%3+1;
	if(a==1)
	{
		return "Rock";
	}
	else if(a==2)
	{
		return "Paper";
	}
	else if(a==3)
	{
		return "Scissor";
	}
}
string getUserMove()
{
	string user;
	cout<<"Enter user move:";
	cin>>user;
	return user;
}
int getResult(string cmove,string umove)
{
	if(cmove=="Rock"&&umove=="Rock" || cmove=="Paper"&&umove=="Paper" || cmove=="Scissor"&&umove=="Scissor")
	{
		return 0;
	}
	else if(cmove=="Rock"&&umove=="Paper" || cmove=="Paper"&&umove=="Scissor" || cmove=="Scissor"&&umove=="Rock")
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

int main()
{
	int nwins=0,nlosses=0,draw=0;
	for(int i=0;i<10;i++)
	{
		string cmove=getComputerMove();
		string umove=getUserMove();
		int n=getResult(cmove,umove);
		if(n==1)
		{
			nwins++;
		}
		else if(n==-1)
		{
			nlosses++;
		}
		else if(n==0)
		{
			draw++;
		}
	}
	cout<<"Number of wins are "<<nwins<<"\n";
	cout<<"Number of losses are "<<nlosses<<"\n";
	cout<<"Number of Draws are "<<draw;
	return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

string getComputerMove()
{
	srand(time(0));
	int a=rand()%3+1;
	if(a==1)
	{
		return "Rock";
	}
	else if(a==2)
	{
		return "Paper";
	}
	else if(a==3)
	{
		return "Scissor";
	}
}
string getUserMove()
{
	string user;
	cout<<"Enter user move:";
	cin>>user;
	return user;
}
int getResult(string cmove,string umove)
{
	if(cmove=="Rock"&&umove=="Rock" || cmove=="Paper"&&umove=="Paper" || cmove=="Scissor"&&umove=="Scissor")
	{
		return 0;
	}
	else if(cmove=="Rock"&&umove=="Paper" || cmove=="Paper"&&umove=="Scissor" || cmove=="Scissor"&&umove=="Rock")
	{
		return 1;
	}
	else if(cmove=="Rock"&&umove=="Scissor" || cmove=="Paper"&&umove=="Rock" || cmove=="Scissor"&&umove=="Paper")
	{
		return -1;
	}
}

int main()
{
	int nwins=0,nlosses=0,draw=0;
	for(int i=0;i<10;i++)
	{
		string cmove=getComputerMove();
		string umove=getUserMove();
		int n=getResult(cmove,umove);
		if(n==1)
		{
			nwins++;
		}
		else if(n==-1)
		{
			nlosses++;
		}
		else if(n==0)
		{
			draw++;
		}
	}
	cout<<"Number of wins are "<<nwins<<"\n";
	cout<<"Number of losses are "<<nlosses<<"\n";
	cout<<"Number of Draws are "<<draw;
	return 0;
}
*/

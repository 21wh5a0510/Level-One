#include<bits/stdc++.h>
using namespace std;
int convertsbase(int x,sbase1)
{
	int sum=0,a=0;
	while(x>0)
	{
		int rem=x%10;
		sum+=rem*pow(sbase1,a);
		a++;
	}
	return sum;
}
string converttbase(string x,tbase1)
{
	string res="";
	for(int i=x.length()-1;i>=0;i--)
	{
		
	}
}
string convertBase(int n,int sbase,int tbase)
{
	int num;
	num=convertsbase(n,sbase);
	return converttbase(num,tbase);
}
int main()
{
	int sb,tb,number;
	cout<<"Enter source base:";
	cin>>sb;
	cout<<"Enter Number:";
	cin>>number;
	cout<<"Enter target base:";
	cin>>tb;
	cout<<"The number is "<<convertBase(number,sb,tb);
	return 0;
}

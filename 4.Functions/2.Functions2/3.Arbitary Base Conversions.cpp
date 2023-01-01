#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int convertDec(string n,int sbase)
{
	int dec=0,i=0,rem=0;
	int num=stoi(n);
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		dec+=rem*pow(sbase,i);
		i++;
	}
	return dec;
}
string convertBase(string n,int sbase,int tbase)
{
	int rem;
	string res="";
	int num=convertDec(n,sbase);
	while(num>0)
	{
		rem=num%tbase;
		if(rem>9)
		{
			rem=(char)rem-10+'A';
			res=to_string(rem)+res;
		}
		else
		{
			res=to_string(rem)+res;
		}
		num/=tbase;
	}
	return res;
}

int main()
{
	string number;
	int sb,tb;
	cout<<"Enter Number:";
	cin>>number;
	cout<<"Enter source base:";
	cin>>sb;
	cout<<"Enter target base:";
	cin>>tb;
	if(sb>=2&&sb<=16 && tb>=2&&tb<=16)
	{
		cout<<"The number is "<<convertBase(number,sb,tb);
	}
	else
	{
		cout<<"Impossible";
	}
	return 0;
}

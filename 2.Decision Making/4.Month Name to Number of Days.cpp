/*The length of a month varies from 28 to 31 days. In this exercise you will create a program that reads
the name of a month from the user as a string. Then your program should display the number of days in that month.
Display "28 or 29 days" for February so that leap years are addressed.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout<<"Enter string:";
	cin>>s;
	if(s=="january"||s=="march"||s=="may"||s=="july"||s=="august"||s=="october"||s=="december")
	{
		cout<<"Number of days in "<<s<<" is 31";
	}
	else if(s=="february")
	{
		cout<<"Number of days in "<<s<<" is 28 or 29";
	}
	else if(s=="april"||s=="june"||s=="september"||s=="november")
	{
		cout<<"Number of days in "<<s<<" is 30";
	}
	else
	{
		cout<<"Enter Correct month";
	}
	return 0;
}

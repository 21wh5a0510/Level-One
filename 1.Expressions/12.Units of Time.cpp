/*Write a program that begins by reading a number of seconds from the user.Then your program should display the equivalent amount
of time in the form D:HH:MM:SS, where D, HH, MM, and SS represent days, hours, minutes and seconds respectively. The hours,
minutes and seconds should all be formatted so that they occupy exactly two digits. Use your research skills determine what additional 
character needs to be included in the format specifier so that leading zeros are used instead of leading spaces when a number is
formatted to a particular width*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sec;
	cout<<"Enter seconds:";
	cin>>sec;
	int day,hours,min;
	day=sec/86400;
	sec=sec%86400;
	hours=sec/3600;
	sec=sec%3600;
	min=sec/60;
	sec=sec%60;
	cout<<"D:HH:MM:SS "<<day<<":"<<hours<<":"<<min<<":"<<sec;
	return 0;
}

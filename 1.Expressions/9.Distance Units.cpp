/*Write a program that begins by reading a measurement in feet from the user.
Then your program should display the equivalent distance in inches, yards and miles.
Use the Internet to look up the necessary conversion factors if you don't have them memorized.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number:";
	cin>>n;
	float inches,yards,miles;
	inches=n*12;
	yards=n/3;
	miles=n*0.0001893939;
	cout<<"Inches:"<<inches<<"\n"<<"Yards:"<<yards<<"\n"<<"Miles:"<<miles;
	return 0;
}

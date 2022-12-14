/*Write a program that reads a four-digit integer from the user and displays the sum of its digits.
For example, if the user enters 3141 then your program should display 3+1+4+1=9.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter 4 digit number:";
	cin>>n;
	int a,sum=0;
	a=n%10;
	sum+=a;
	n=n/10;
	
	a=n%10;
	sum+=a;
	n=n/10;
	
	a=n%10;
	sum+=a;
	n=n/10;
	
	sum+=n;
	cout<<"The sum of the digits are"<<sum;
	return 0;
}

/* Using strings

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout<<"Enter 4 digit number:";
	cin>>s;
	cout<<"The Sum of Digits is "<<(s[0]-'0')+(s[1]-'0')+(s[2]-'0')+(s[3]-'0');
	return 0;
}

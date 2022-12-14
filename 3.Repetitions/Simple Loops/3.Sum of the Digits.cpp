/*Write a program that reads an integer from the user and displays the sum of its digits.
For example,if the user enters 31415 then your program should display 3+1+4+1+5=14.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0,rem;
	cout<<"Enter number:";
	cin>>n;
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	cout<<"Sum of Digits are "<<sum;
	return 0;
}

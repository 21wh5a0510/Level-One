/*Write a program that reads an integer from the user and display a message indicating whether the integer is even or odd.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cout<<"Enter number:";
	cin>>a;
	if(a%2==0)
	{
		cout<<"The Number is even";
	}
	else
	{
		cout<<"The number is odd";
	}
	return 0;
}

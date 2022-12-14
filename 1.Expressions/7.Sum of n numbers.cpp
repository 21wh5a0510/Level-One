/*Write a program that reads a positive integer, n, from the user and then displays the sum of all of the integers from 1 to n.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number:";
	cin>>n;
	cout<<"The sum of n numbers are:"<<((n)*(n+1))/2;
	return 0;
}

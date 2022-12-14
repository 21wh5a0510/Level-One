/*Given the value of n write a program that displays the sum of first n odd integers.For given value of 3 the program should display 1+3+5=9.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0,odd=1;
	cout<<"Enter n:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum+=odd;
		odd+=2;
	}
	cout<<sum;
	return 0;
}

/* Using While

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0,odd=1;
	cout<<"Enter n:";
	cin>>n;
	while(n>0)
	{
		sum+=odd;
		odd+=2;
		n--;
	}
	cout<<sum;
	return 0;
}

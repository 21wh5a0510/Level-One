/*Given the value of n, Write a program that displays the sum of first n integers.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter Number:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	cout<<"The Sum of first "<<n<<" integers are "<<sum;
	return 0;
}

/* Uisng While

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0,i=1;
	cout<<"Enter Number:";
	cin>>n;
	while(n>0)
	{
		sum+=i;
		i++;
		n--;
	}
	cout<<"The Sum of first integers are "<<sum;
	return 0;
}*/

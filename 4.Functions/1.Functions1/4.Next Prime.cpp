#include<bits/stdc++.h>
using namespace std;

bool isPrime(int y)
{
	for(int i=2;i<=y/2;i++)
	{
		if(y%i==0)
		{
			return false;
		}
	}
	return true;
}
int nextPrime(int x)
{
	while(1)
	{
		x=x+1;
		if(isPrime(x))
		{
			return x;
		}
	}
}

int main()
{
	int n;
	cout<<"Enter Number:";
	cin>>n;
	cout<<"The Next Prime Number is "<<nextPrime(n);
	return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int y)
{
	int count=0;
	for(int i=1;i<=y;i++)
	{
		if((y%i)==0)
		{
			count++;	
		}
	}
	if(count==2)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int nextPrime(int x)
{
	while(1)
	{
		x=x+1;
		if(isPrime(x))
		{
			return x;
		}
	}
}
  
int main()
{
	int n;
	cout<<"Enter Number:";
	cin>>n;
	cout<<"The Next Prime Number is "<<nextPrime(n);
	return 0;
}
*/

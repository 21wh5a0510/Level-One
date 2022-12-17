#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
	for(int i=2;i<x/2;i++)
	{
		if(x%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cout<<"Enter Number:";
	cin>>n;
	if(isPrime(n))
	{
		cout<<"Number is Prime";
	}
	else
	{
		cout<<"Number is not Prime";
	}
	return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int x){
	int count=0;
	for(int i=1;i<=x;i++){
		if((x%i)==0){
		 count++;	
		}
	}
	if(count==2){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int n;
	cout<<"Enter Number:";
	cin>>n;
	if(isPrime(n)){
		cout<<"Number is Prime";
	}
	else{
		cout<<"Number is Not Prime";
	}
	
}
*/

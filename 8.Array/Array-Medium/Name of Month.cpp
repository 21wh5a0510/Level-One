#include<iostream>
using namespace std;
int main()
{
	int n;
	string arr[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	cin>>n;
	if(n>0 && n<13)
	{
		cout<<arr[n-1];
	}
	else
	{
		cout<<"Enter correct number!!";
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	float temp=10.00,fahrenheit;
	cout<<"Celsius\t\t\tfahrenheit\n";
	for(int i=1;i<=10;i++)
	{
		fahrenheit=temp*9/5+32;
		cout<<temp<<"C"<<fixed<<setprecision(2)<<"\t\t\t";
		cout<<fahrenheit<<fixed<<setprecision(2)<<"F\n";
		temp+=10;
	}
	return 0;
}

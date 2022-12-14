/*Pretend that you have just opened a new savings account that eams 4 percent interest per year.
The interest that you eam is paid at the end of the year, and is added to the balance of the savings account.
Write a program that begins by reading the amount of money deposited into the account from the user.
Then your program should compute and display the amount in the savings account after 1, 2, and 3 years.
Display each amount so that it is rounded to 2 decimal places.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int amount;
	cout<<"Enter amount:";
	cin>>amount;
	float one=0.0,two=0.0,three=0.0;
	one=(float)amount*4/100+amount;
	two=(float)one*4/100+one;
	three=(float)two*4/100+two;
	cout<<one<<"\n"<<two<<"\n"<<three;
	return 0;
}

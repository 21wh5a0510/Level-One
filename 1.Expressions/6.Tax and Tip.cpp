/*The program that you create for this exercise will begin by reading the cost of a meal ordered at a restaurant from the user.
Then your program will compute the tax and tip for the meal. Compute the tax as 18 percent of the meal amount.Compute the tip as 
5 percent of the meal amount (without the tax). The output from your program should include the tax amount,the tip amount, and the
grand total for the meal including both the tax and the tip. Format the output so that all of the values are displayed using two decimal places.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	float cost;
	cout<<"Enter cost:";
	cin>>cost;
	float  tax,tip,total;
	tax=(18*cost)/100;
	cout<<"The tax is "<<tax<<"\n";
	tip=(5*cost)/100;
	cout<<"The tip is "<<tip<<"\n";
	total=tax+tip+cost;
	cout<<"The total amount id "<<total;
}

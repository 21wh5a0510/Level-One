/*The year is divided into four seasons: spring, summer, fall (or autumn) and winter.
While the exact dates that the seasons change vary a little bit from year to year because 
of the way that the calendar is constructed, we will use the following dates for this exercise:
                 Season            First Day
		Spring       	     March 20
                 Summer             June 21
                  Fall             September 22
                 Winter             December 21

Create a program that reads a month and day from the user. The user will enter the name of the month as a string,
followed by the day within the month as an integer. Then your program should display the season associated with 
the date that was entered.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string month;
	int day;
	cout<<"Enter month:";
	cin>>month;
	cout<<"Enter day:";
	cin>>day;
	if(month=="January"||month=="February")
	{
		cout<<"Spring";
	}
	else if((month=="December"&&day>21)||(month=="March"&&day<=20))
	{
		cout<<"Spring";
	}
	else if(month=="April"||month=="June")
	{
		cout<<"Summer";
	}
	else if((month=="March"&&day>20)||(month=="June"&&day<=21))
	{
		cout<<"Summer";
	}
	else if(month=="July"||month=="August")
	{
		cout<<"Fall";
	}
	else if((month=="June"&&day>21)||(month=="September"&&day<=22))
	{
		cout<<"Fall";
	}
	else if(month=="October"||month=="November")
	{
		cout<<"Winter";
	}
	else if((month=="September"&&day>22)||month=="December"&&day<=21)
	{
		cout<<"Winter";
	}
	else
	{
		cout<<"Enter correct month";
	}
	return 0;
}

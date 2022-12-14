/*The horoscopes commonly reported in newspapers use the position of the sun at the time of one's birth to try and predict the future.
This system of astrology divides the year into twelve zodiac signs, as outline in the table below.
            Zodiac Sign             Date Range
            Capricorn            December 22 to January 19
			Aquarius             January 20 to February 18
			Pisces                February 19 to March 20
			Aries					March 21 to April 19
			Taurus					 April 20 to May 20
			Gemini					May 21 to June 20
			Cancer					June 21 to July 22
			Leo					   July 23 to August 22
			Virgo				August 23 to September 22
			Libra			   September 23 to October 22
			Scorpio			   October 23 to November 21
			Sagittarius		   November 22 to December 21
Write a program that asks the user to enter his or her month and day of birth.
Then your program should report the user's zodiac sign as part of an appropriate output message.*/

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
	if((month=="December" && day>=22)||(month=="January" && day<=19))
	{
		cout<<"Capricorn";
	}
	else if((month=="January" && day>=20)||(month=="February" && day<=18))
	{
		cout<<"Aquarius";
	}
	else if((month=="February" && day>=19)||(month=="March" && day<=20))
	{
		cout<<"Pisces";
	}
	else if((month=="March" && day>=21)||(month=="April" && day<=19))
	{
		cout<<"Aries";
	}
	else if((month=="April" && day>=20)||(month=="May" && day<=20))
	{
		cout<<"Taurus";
	}
	else if((month=="May" && day>21)||(month=="June" && day<=20))
	{
		cout<<"Gemini";
	}
	else if((month=="June" && day>=21)||(month=="July" && day<=22))
	{
		cout<<"Cancer";
	}
	else if((month=="July" && day>=23)||(month=="August" && day<=22))
	{
		cout<<"Leo";
	}
	else if((month=="August" && day>=23)||(month=="September" && day<=22))
	{
		cout<<"Virgo";
	}
	else if((month=="September" && day>=23)||(month=="October" && day<=22))
	{
		cout<<"Libra";
	}
	else if((month=="October" && day>=23)||(month=="November" && day<=21))
	{
		cout<<"Scorpio";
	}
	else if((month=="November" && day>=22)||(month=="December" && day<=21))
	{
		cout<<"Sagittarius";
	}
	else
	{
		cout<<"Enter Correct Month and Day.";
	}
	return 0;
}

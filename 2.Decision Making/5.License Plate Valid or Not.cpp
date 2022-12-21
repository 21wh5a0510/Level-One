/*In a particular jurisdiction, older license plates consist of three uppercase letters followed by three digits.
When all of the license plates following that pattem had been used, the format was changed to four digits followed
by three uppercase letters. Write a program that begins by reading a string of characters from the user. Then your 
program should display a message indicating whether the characters are valid for an older style license plate or a 
newer style license plate. Your program should display an appropriate message if the string entered by the user is 
not valid for either style of license plate.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout<<"Enter string:";
	cin>>s;
	int length=s.length();
	if(length==6)
	{
		if(s[0]>='A' && s[0]<='Z' && s[1]>='A' && s[1]<='Z' && s[2]>='A' && s[2]<='Z' && s[3]>='0' && s[3]<='9' && s[4]>='0' && s[4]<='9' && s[5]>='0' && s[5]<='9')
		{
			cout<<"License plate is older style and it is valid";
		}
		else
		{
			cout<<"License plate is not valid";
		}
	}
	else if(length==7)
	{
		if(s[0]>='0' && s[0]<='9' && s[1]>='0' && s[1]<='9' && s[2]>='0' && s[2]<='9' && s[3]>='0' && s[3]<='9' && s[4]>='A' && s[4]<='Z' && s[5]>='A' && s[5]<='Z' && s[6]>='A' && s[6]<='Z')
		{
			cout<<"License plate is newer style and it is valid";
		}
		else
		{
			cout<<"License plate is not valid";
		}
	}
	else
	{
		cout<<"License plate is not valid";
	}
	return 0;
}

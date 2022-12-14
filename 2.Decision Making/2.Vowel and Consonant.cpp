/*Write a program that reads a letter of the alphabet from the user. If the user enters a, e, i, o or u then your 
program should display a message indicating that the entered letter is a vowel. If the user enters y then your program 
should display a message indicating that sometimes y is a vowel, and sometimes y is a consonant. Otherwise your program 
should display a message indicating that the letter is a consonant.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a;
	cout<<"Enter letter:";
	cin>>a;
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		cout<<"The Letter is vowel";
	}
	else if(a=='y'||a=='Y')
	{
		cout<<"sometimes y is a vowel and sometimes y is a consonant";
	}
	else if(a>='a'&&a<='z'||a>='A'&&a<='Z')
	{
		cout<<"The letter is consonant";
	}
	else
	{
		cout<<"Enter a letter";
	}
	return 0;
}

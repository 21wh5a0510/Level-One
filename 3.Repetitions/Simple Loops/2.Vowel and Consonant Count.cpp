/*Write a program that will examine each character in a given string and determine how many of the characters are vowels and consonants.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int vcount=0,ccount=0;
	cout<<"Enter string:";
	cin>>s;
	int length=s.length();
	for(int i=0;i<length;i++)
	{
		char a=tolower(s[i]);
		if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
		{
			vcount++;
		}
		else
		{
			ccount++;
		}
	}
	cout<<"Vowel Count="<<vcount<<"\n";
	cout<<"Consonant Count="<<ccount<<"\n";
	return 0;
}

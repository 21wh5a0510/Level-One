#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
	int length=s.length();
	int start=0;
	for(int i=start,j=length-1;i<j;i++,j--)
	{
		if(s[i]!=s[j])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	string palindrome;
	cout<<"Enter palindrome:";
	cin>>palindrome;
	if(isPalindrome(palindrome))
	{
		cout<<"The string is Palindrome";
	}
	else
	{
		cout<<"The string is not Palindrome";
	}
	return 0;
}

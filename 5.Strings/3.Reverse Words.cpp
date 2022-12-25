#include<bits/stdc++.h>
using namespace std;
string reverseWords(string s)
{
	string fstr="",str="";
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==' ')
		{
			fstr=str+s[i]+fstr;
			str="";
		}
		else
		{
			str+=s[i];
		}
	}
	return fstr=str+' '+fstr;
}
int main()
{
	string words;
	cout<<"Enter string:";
	getline(cin,words);
	cout<<reverseWords(words);
	return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//
//float getHypotenuse(float a,float b)
//{
//	return sqrt((a*a)+(b*b));
//}
//int main()
//{
//	float s1,s2;
//	cout<<"Enter Sides:";
//	cin>>s1>>s2;
//	cout<<"The Hypotenuse of the Triangle is "<<getHypotenuse(s1,s2);
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
//	string rev="";
//	rev=s;
//	reverse(s.begin(),s.end());
//	if(s==rev)
//	{
//		cout<<"yes";
//	}
//	else
//	{
//		cout<<	"No";
//	}
	string tmp="";
    for(int i=s.length()-1;i>0;i--)
    {
    	tmp+=s[i];
	}
	if(tmp==s)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}

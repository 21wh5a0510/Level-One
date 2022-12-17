#include<bits/stdc++.h>
using namespace std;

float getHypotenuse(float a,float b)
{
	return sqrt((a*a)+(b*b));
}
int main()
{
	float s1,s2;
	cout<<"Enter Sides:";
	cin>>s1>>s2;
	cout<<"The Hypotenuse of the Triangle is "<<getHypotenuse(s1,s2);
	return 0;
}

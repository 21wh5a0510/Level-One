/*Write a program that computes the area of a triangle when the lengths of all three sides are known.
Let s1,s2,s3 be the lengths of the sides and let s=(s1+s2+s3)/2. Then the area of the triangle can be
calculated using the following formula:area=sqrt(s*(s-s1)*(s-s2)*(s-s3)).*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	float s1,s2,s3,s,area;
	cout<<"Enter side:";
	cin>>s1>>s2>>s3;
	s=(s1+s2+s3)/2;
	area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
	cout<<"Area of triangle:"<<area;
	return 0;
}

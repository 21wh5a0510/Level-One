/*Write a program that begins by reading a radius, r, from the user.
The program will continue by computing and displaying the area of a circle with radius r and the volume of a sphere with radius r.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	float r;
	cout<<"Enter radius:";
	cin>>r;
	float area,volume;
	area=3.14*r*r;
	cout<<"The area of circle is "<<area<<"\n";
	volume=(4*3.14*r*r*r)/3;
	cout<<"The volume of sphere is "<<volume;
	return 0;
}

/*Write a program that asks user to enter the width and length of a room.
Once these values have been read, your program should compute and display the area of the room.
The length and the width will be entered as floating-point numbers. Include units in your prompt
and output message in either feet or meters, depending on which which unit you are more comfortable working with.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	float width,length,area;
	cout<<"Enter width:";
	cin>>width;
	cout<<"Enter length:";
	cin>>length;
	area=width*length;
	cout<<"Area of the room:"<<area<<"square meter";
}

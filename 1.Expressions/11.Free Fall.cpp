/*Write a program that determines how quickly an object is travelling when it hits the ground.
The user will enter the height from which the object is dropped in meters (m).
Because the object is dropped its initial speed,v, is 0 m/s. Assume that the acceleration due to gravity is 9.8 m/s².
You can use the formula = v+2ad to compute the final speed, vt, when the initial speed, vi, acceleration, a, and distance, d, are known.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	float v=0.0,d,a=9.8;
	cout<<"Enter distance:";
	cin>>d;
	float final=sqrt((v*v)+2*a*d);
	cout<<"The final speed is "<<final;
	return 0;
}

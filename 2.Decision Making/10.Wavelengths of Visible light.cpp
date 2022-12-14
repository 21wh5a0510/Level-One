/*The wavelength of visible light ranges from 380 to 750 nanometers (nm). While the spectrum is continuous, it is often divided into 6 colors as shown below.
				Color		Wavelength (nm)
				Violet		380 to less than 450
				Blue		450 to less than 495
				Green		495 to less than 570
				Yellow		570 to less than 590
				Orange		590 to less than 620
				Red			620 to 750
Write a program that reads a wavelength from the user and reports its color. Display an appropriate error message if the wavelength entered by the user 
is outside of the visible spectrum.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int wave;
	cout<<"Enter Wavelength:";
	cin>>wave;
	if(wave>=380 && wave<450)
	{
		cout<<"Violet";
	}
	else if(wave>=450 && wave<495)
	{
		cout<<"Blue";
	}
	else if(wave>=495 && wave<570)
	{
		cout<<"Green";
	}
	else if(wave>=570 && wave<590)
	{
		cout<<"Yellow";
	}
	else if(wave>=590 && wave<620)
	{
		cout<<"Orange";
	}
	else if(wave>=620 && wave<=750)
	{
		cout<<"Red";
	}
	else
	{
		cout<<"Enter Correct Wavelength";
	}
	return 0;
}

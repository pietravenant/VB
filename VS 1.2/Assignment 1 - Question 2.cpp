// Assignment 1 - Question 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Windchill Calcualte Program
// 48780715 - P AVENANT


#include <iostream>
#include <cmath> 

using namespace std;

double calcWindchillIndex(double v, double t) //Fuction that calculate the Windchill Index 
{
	return(13.12 + 0.6215 * t - 11.37 * pow(v, 0.16) + 0.3965 * t * pow(v, 0.016));
}

int main()
{
	double v; //Wind speed
	double t; //Temperature
	double W; // Windchill index

	cout << "This program will calculate the Windchille factor." << endl;
	cout << "Please insert the following values" << endl;

	cout << "Wind speed in m/sec: ";
	cin >> v;

	int Check = 1;  
	while (Check == 1)  //runs again if the Temperature is incorrect, forcing the user to enter the correct Temperature value
	{
		Check = 2;
		cout << "Temperature in degrees Celsius: ";
		cin >> t;


		if (t <= 10) //if this condition is true the fuction will run and the index will be displayed 
		{
			W = calcWindchillIndex(v, t);
			cout << "The windchill index is: " << W << " Degress Celsius" << endl;
		}
		else //if the condition is fals 
		{
			Check = 1;
			cout << "The Temperature must be equal or less than 10" << endl;
		}
	}
}

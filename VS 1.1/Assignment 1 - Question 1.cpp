// Assignment 1 - Question 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Calculate Volume of Spheres,Cylinders and Boxes
// 48780715 - P AVENANT

#include <iostream>
#include <cmath> 

using namespace std;

double	PI = 3.14; //Global Constant PI

double calcVolume(double width, double height, double lenght) //Funtion for calculating the Volume for a BOX
{
	return (width * height * lenght);
}

double calcVolume(double radius) //Funtion for calculating the Volume for a Sphere
{
	return (4.0 / 3 * PI * pow(radius, 3));
}
double calcVolume(double radius, double height) //Funtion for calculating the Volume for a Cylinder
{
	return (PI * pow(radius, 2) * height);
}

int main()
{
	int Type;
	int Check = 1;

	while (Check == 1)				//While loop created to check if the user insert the correct option, if not ask again
	{
			double width;
			double height;
			double lenght;
			double radius;

		Check = 2;
		cout << "Which shape's volume do you want to calculate?" << endl << "1 - Box, 2 - Sphere, 3 - Cylinder" << endl;
		cin >> Type;

		if (Type == 1)			    //If Type is 1 that is a Box, Run this Statement
		{
			cout << "Calculating the volume of a box" << endl;
			cout << "Please insert the following values" << endl;
			cout << "Width: ";
			cin >> width;
			cout << "Height: ";
			cin >> height;
			cout << "Lenght: ";
			cin >> lenght;
			cout << "The Volume of the box is: " << calcVolume(width, height, lenght) << endl;
		}

		else if (Type == 2)			//If Type is 2 that is a Sphere, Run this Statement
		{
			cout << "Calculating the volume of a Sphere" << endl;
			cout << "Please insert the following value" << endl;
			cout << "Radius: ";
			cin >> radius;
			cout << "The Volume of the Sphere is: " << calcVolume(radius) << endl;
		}
		else if (Type == 3)			//If Type is 3 that is a Cylinder, Run this Statement
		{
			cout << "Calculating the volume of a Cylinder" << endl;
			cout << "Please insert the following value" << endl;
			cout << "Radius: ";
			cin >> radius;
			cout << "Height: ";
			cin >> height;
			cout << "The Volume of the Cylinder is: " << calcVolume(radius, height) << endl;
		}
		else						// If Type is entered incorrecly, Run this Statement
		{
			Check = 1;
			cout << "Incorrect Shape selected, Please try again" << endl;
		}
	}
}

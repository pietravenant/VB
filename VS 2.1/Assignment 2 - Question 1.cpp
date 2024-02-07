// Assignment 2 - Question 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cstdlib>

using namespace std;

class Address

{

private:

	string streetName;

	string streetNr;

	string city;

	string postalCode;

public:

	Address()

	{

		this->streetName = "";

		this->streetNr = "0";

		this->city = "";

		this->postalCode = "0000";

	}

	/*Address(string streetName, string streetNr, string city, string postalCode)

	{

	this->streetName = streetName;

	this->streetNr = streetNr;

	this->city = city;

	this->postalCode = postalCode;

	}*/

	// accessor methods

	string getStreetName() { return this->streetName; }

	string getStreetNumber() { return this->streetNr; }

	string getCity() { return this->city; }

	string getPostalCode() { return this->postalCode; }

	// mutator methods

	void setStreetName(string streetName)

	{

		this->streetName = streetName;

	}

	void setStreetNumber(string streetNr)

	{

		this->streetNr = streetNr;

	}

	void setCity(string city)

	{

		this->city = city;

	}

	void setPostalCode(string postalCode)

	{

		this->postalCode = postalCode;

	}

	void display()

	{

		cout << endl << "Address: " << getStreetNumber() << " " << getStreetName() << ", " << getCity() << ", " << getPostalCode() << endl;

	}

};

int main()

{

	string streetName, streetNr, city, postalCode;

	Address address;

	cout << endl << "Enter the street name: ";

	//cin >> streetName;
	//getline(cin, streetName);

	cout << "Enter the street number: ";

	cin >> streetNr;

	cout << "Enter the city: ";

	cin >> city;

	cout << "Enter the postal code: ";

	cin >> postalCode;

	address.setStreetName(streetName);

	address.setStreetNumber(streetNr);

	address.setCity(city);

	address.setPostalCode(postalCode);

	cout << endl;

	address.display();

	return 0;

}
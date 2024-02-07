#pragma once
//Shares.h  

#pragma once
#include<string>
#include<iostream>
#include<fstream>
using namespace std;
//class Shares defined as an ADT
class Shares
{
private:
	//variable to hold the name of the company
	string company;
	//variable to hold the number of shares a shareholder owns
	int nrShares;
	//variable to hold the current value of one share
	float unitValue;
	//an array to keep five double values
	double pastUnitValues[5];
public:
	//Default constructor
	Shares();
	//Parameterized constructor
	Shares(string name, int count, int value);
	//Destructor
	~Shares();
	//Accessors
	int getnShares();
	float getUnitValues();

	//Method to overload operator== to compare two Shares objects
	friend bool operator==(const Shares& s1, const Shares& s2)
	{
		//compares the names of two companies and returns true if they are same
		if (s1.company == s2.company)
		{
			return true;
		}
		//return false if the names of two companies are different
		return false;
	}

	//Function updateShares () that updates the shares details
	void updateShares(const Shares& s1);

	//method to operator >> so that it can be used to input values of type Shares
	friend istream& operator>>(ifstream& in, Shares& s1)
	{
		in >> s1.company >> s1.nrShares >> s1.unitValue >> s1.pastUnitValues[0]
			>> s1.pastUnitValues[1] >> s1.pastUnitValues[2] >> s1.pastUnitValues[3]
			>> s1.pastUnitValues[4];
		return in;
	}
	//method to operator << so that it can be used to ouput values of type Shares
	friend ostream& operator<<(ofstream& out, Shares& s1)
	{
		out << s1.company << " " << s1.nrShares << " " << s1.unitValue << " "
			<< s1.pastUnitValues[0] << " " << s1.pastUnitValues[1] << " "
			<< s1.pastUnitValues[2] << " " << s1.pastUnitValues[3] << " "
			<< s1.pastUnitValues[4];
		return out;
	}
};
//Shares.cpp  

#include "Shares.h"
//definition of default constructor
Shares::Shares()
{
	company = "";
	nrShares = 0;
	unitValue = 0;
	for (int i = 0; i < 5; i++)
	{
		pastUnitValues[i] = 0;
	}
}
//definition of Parameterized constructor
Shares::Shares(string name, int count, int value)
{
	company = name;
	nrShares = count;
	unitValue = value;
	for (int i = 0; i < 5; i++)
	{
		pastUnitValues[i] = 0;
	}
}
//Destructor
Shares::~Shares() {}
//definition of accessor function getnShares()
int Shares::getnShares()
{
	return nrShares;
}
//definition of accessor function getUnitValues()
float Shares::getUnitValues()
{
	return unitValue;
}
//Function definition of function updateShares that uodates share details
void Shares::updateShares(const Shares& s1)
{
	//to adds the number of shares bought to nrShares
	this->nrShares += s1.nrShares;
	//to update the value of unitValue
	this->unitValue = s1.unitValue;
	//to update pastUnitValues
	//to move all the pastUnitValues to one position to the left
	for (int i = 0; i < 4; i++)
	{
		pastUnitValues[i] = pastUnitValues[i + 1];
	}
	//to add the current unitValue as a last element
	pastUnitValues[4] = s1.unitValue;
}
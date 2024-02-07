//driver.cpp

#include "Shares.h"
int main()
{
	//Variable declaration
	string name;
	int count;
	int value;
	//Prompt the user to enter company name, number of shares bought
	//and unit price of one share
	cout << "Enter name of company in which shares are bought: ";
	cin >> name;
	cout << "Enter number of shares bought: ";
	cin >> count;
	cout << "Enter unit value of one share: ";
	cin >> value;
	//Create a insatnce variable shares1 of Shares class
	Shares shares1(name, count, value);
	//create an object of input file named inputFile
	ifstream inputFile("Portfolio.dat");
	//create an object of output file named outputFile
	ofstream outputFile("NewPortfolio.dat");
	//create an object of class Shares to read data from input file
	Shares shares2;
	//check if the specified input file is there or not
	if (!inputFile)
	{
		cout << "File not found!!1" << endl;
		exit(0);
	}
	//Read data from input file into shares2 using operator overload >>
	while (inputFile >> shares2)
	{
		//Check if the company names of two objects is same or not
		//if they are same, call updateShares() and update the values
		//and write into the output file
		if (shares2 == shares1) {
			shares2.updateShares(shares1);
			outputFile << shares2 << endl;
		}
		//if they are not same, then just write into the output file
		else {
			outputFile << shares2 << endl;
		}
	}
	//Close files
	inputFile.close();
	outputFile.close();
}
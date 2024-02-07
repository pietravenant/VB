// Assignment 1 - Question 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
	string subject; //variable declaration for subject code
	float perAss1 = 0; //variable for percentage of assignment 1 contribution
	float stuPerAss1 = 0; //variable for student percent in assignment 1
	float perAss2 = 0;//variable for percentage of assignment 2 contribution
	float stuPerAss2 = 0;//variable for student percent in assignment 1
	float yearmark; //variable for year percentage of course
	
	ifstream in_stream; //declaring ifstream variable to read a file
	ofstream out_stream; //declaring ofstream variable to write a file
	
	in_stream.open("assignments.dat"); //open the input dat file
	if (in_stream.fail())
	{
		cout << "input file opening failed.\n";
		exit(1);
	}
	
	out_stream.open("yearmark.dat"); //open the output dat file
	
	string line; //variable for reading
		
	while (getline(in_stream, line)) { // Continue if the line was sucessfully read.

		yearmark = 0;
		istringstream iss(line); //string stream to read the line by line string

		if (!(iss >> subject >> perAss1 >> stuPerAss1 >> perAss2 >> stuPerAss2)) { break; } //error when the text file is not in the right format

		yearmark = (stuPerAss1 / 100 * perAss1) + (stuPerAss2 / 100 * perAss2); //calculate the year percent for that course

		out_stream << subject << " " << fixed << setprecision(2) << yearmark << "%" << endl; //store in output file
	
	}

	out_stream.close(); //close the output file
	in_stream.close(); //close the input file
	cout << "The information has been saved in the yearmark.dat file"; //prompt after file output
		
}

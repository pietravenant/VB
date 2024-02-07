//Header files
#include <iostream>
#include<fstream>
#include<string>
using namespace std;
//Create a class Address
class Address {
	//Data members
private:
	string street;
	int houseNum;
	string city;
	string zip;
	//Member functions
public:
	//Getters
	string getStreet() {
		return street;
	}
	int gethouseNumber() {
		return houseNum;
	}
	string getCity() {
		return city;
	}
	string getZip() {
		return zip;
	}
	//Overload insertion operator for file read
	friend istream& operator>>(ifstream& in, Address& addr) {
		getline(in, addr.street);
		in >> addr.houseNum;
		in >> addr.city;
		in >> addr.zip;
		in.ignore();
		return in;
	}
	//Overload insertion operator from keyboard read
	friend istream& operator>>(istream& in, Address& addr) {
		in.ignore();
		cout << "Enter street name: ";
		getline(in, addr.street);
		cout << "Enter house number: ";
		in >> addr.houseNum;
		cout << "Enter city: ";
		in >> addr.city;
		cout << "Enter zip: ";
		in >> addr.zip;
		return in;
	}
	//Overload extraction operator for console
	friend ostream& operator<<(ostream& out, Address& addr) {
		out << addr.street << "," << addr.houseNum << "," << addr.city << "," << addr.zip << endl;
		return out;
	}
	//Overload extraction operator for file write
	friend ostream& operator<<(ofstream& out, Address& addr) {
		out << addr.street << " " << addr.houseNum << " " << addr.city << " " << addr.zip << endl;
		return out;
	}
};
//Main function
int main()
{
	string zip;
	//Address array
	Address address[20];
	//Address object
	Address addr;
	int i = 0;
	//File path
	ifstream infile;
	infile.open("C:/Users/Pieter/Google Drive/UNISA/2019 2 de sem/COS 1512/Visual studio/Assignment 2 - Question 6/address.dat");
	//File found error check
	if (!infile) {
		cout << "File not found!!!" << endl;
		exit(0);
	}
	//Prompt for zip
	cout << "Enter zip to search: ";
	cin >> zip;
	//File read using insertion operator overload and compare with zip and addinto array
	while (infile >> addr) {
		if (addr.getZip() == zip) {
			address[i] = addr;
			i++;
		}
	}
	infile.close();
	// Matched zip address display on screen using extraction operator overload
	for (int j = 0; j < i; j++) {
		cout << address[j];
	}
	//Test for operator overload from keyboard
	cout << "\nTest for keyboard input" << endl;
	cin >> addr;
	cout << addr;
	//Write into file
	ofstream out("address.txt");
	out << addr;
}
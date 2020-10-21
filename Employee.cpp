// Implementation File for class Employee

#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

// Default Constructor
Employee::Employee() {
	
	// Set all data members to have default values
	LastName = "";
	FirstName = "";
	IDNumber = "";
	sex = M;
	BirthDate = "";
	
}

// Argument Construct
Employee::Employee(string lName, string fName, string idNum, Sex gender, string bdate) {
	
	// Initialize the class attributes
	LastName = lName;
	FirstName = fName;
	IDNumber = idNum;
	sex = gender;
	BirthDate = bdate;
	
}

// Display Employee to the user
void Employee::putData() {
	
	// Output the IDNumber, Employee Full Name, and Birth date
	cout << "ID Employee number: " << IDNumber << endl;
	cout << "Employee name: " << FirstName << " " << LastName << endl;
	cout << "Birth date: " << BirthDate << endl;
	
}

// Getter for Last Name
string Employee::getLastName() {
	
	// Return Last Name
	return LastName;
	
}

// Getter for First Name
string Employee::getFirstName() {
	
	// Return First name
	return FirstName;
	
}

// Getter for ID Number
string Employee::getIDNumber() {
	
	// Return ID Number
	return IDNumber;
	
}

// Getter for Sex
Sex Employee::getSex() {
	
	// Return the Sex
	return sex;
	
}

// Getter for Birth Date
string Employee::getBirthDate() {
	
	// Return Birth Date
	return BirthDate;
	
}

// Setter for Last Name
void Employee::setLastName(string lName) {
	
	// Set LastName to be the passed in value
	LastName = lName;
	
}

// Setter for First Name
void Employee::setFirstName(string fName) {
	
	// Set FirstName to be the passed in value
	FirstName = fName;
	
}

// Setter for ID Number
void Employee::setIDNumber(string idNum) {
	
	// Set the IDNumber to be the passed in value
	IDNumber = idNum;
	
}

// Setter for Sex
void Employee::setSex(Sex gender) {
	
	sex = gender;
	
}

// Setter for Birth Date
void Employee::setBirthDate(string bdate) {
	
	// Set BirthDate to be the passed in value
	BirthDate = bdate;
	
}


	

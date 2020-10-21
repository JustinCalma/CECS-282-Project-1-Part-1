// Education Implemenation Class

#include "Education.h"
#include <iostream>
#include <string>
using namespace std;

// Default constructor
Education::Education() {

	// Set the data members to default values	
	Degree = "";
	Major = "";
	Research = 0;
	
}

// Agrument constructor
Education::Education(string degree, string major, int research) {
	
	// Set the attributes to be the passed in arguments
	Degree = degree;
	Major = major;
	Research = research;
	
}

// Getter for Degree
string Education::getDegree() {
	
	// Returns the degree
	return Degree;
	
}

// Getter for Major
string Education::getMajor() {
	
	// Returns the major
	return Major;
	
}

// Getter for Research
int Education::getResearch() {
	
	// Returns the number of researches 
	return Research;
	
}

// Setter for Degree
void Education::setDegree(string degree) {
	
	// Set Degree to be the passed in value
	Degree = degree;
	
}

// Setter for Major
void Education::setMajor(string major) {
	
	// Set the Major to be the passed in value
	Major = major;
	
}

// Setter for Research
void Education::setResearch(int research) {
	
	// Set the Research to be the passed in value
	Research = research;
	
}

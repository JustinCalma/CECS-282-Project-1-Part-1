// Education Declarization Class

#ifndef EDUCATION_H
#define EDUCATION_H

#include <iostream>
#include <string>
using namespace std;

// Create an Education class
class Education {
	
	// Declare the private attributes 
	private:
		string Degree; // MS or PhD
		string Major; // Engineering, Chemistry, English, etc ...
		int Research; // Number of Researches
		
	// Delcare the public methods 
	public:
		
		// Declare the public getters and setters
		string getDegree();
		string getMajor();
		int getResearch();
		
		void setDegree(string degree);
		void setMajor(string major);
		void setResearch(int research);
		
		// Declare the public default constructor and argument constructor
		Education();
		Education(string degree, string major, int research);
		
};
#endif

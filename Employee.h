// Header file for Employee Class

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "PayrollSystem.h" 
#include <string>
using namespace std;

// Create an abstract class Employee 
class Employee {

	// Declare the private attributes 
	private:
		string LastName;
		string FirstName;
		string IDNumber;
		string BirthDate;
		
		// Create enum for Gender of the Employee
		Sex sex;
		
	// Declare the public methods 
	public:
		// Declare default constructor and argument constructor
		Employee();
		Employee(string lName, string fName, string idNum, Sex gender, string bdate);
		
		// Declare the private members
		virtual void putData();
		
		// Declare getters and setters
		string getLastName();
		string getFirstName();
		string getIDNumber();
		Sex getSex();
		string getBirthDate();
		
		void setLastName(string lName);
		void setFirstName(string fName);
		void setIDNumber(string idNum);
 		void setSex(Sex gender);
 		void setBirthDate(string bdate);
		
		// Declare pure virtual method
		virtual float monthlyEarning() = 0;
		
};
#endif

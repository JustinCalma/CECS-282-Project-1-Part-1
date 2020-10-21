// Justin Calma
// CECS 282 Project 1 Part 1

// Main File

#include "Employee.h"
#include "Staff.h"
#include "Education.h"
#include "Faculty.h"
#include "PartTime.h"

#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// Definition of the main function
int main() {
	
	// Create a vector that contains pointers of type Employee
	vector<Employee*> vector = { new Staff("Allen", "Paita", "123", M, "2/23/1959", 50.00), // Staff data
							   	 new Faculty("Bouris", "William", "791", F, "3/14/1975", AO, Education("Ph.D", "English", 1) ), // Faculty data
							   	 new PartTime("Guzman", "Augusto", "455", F, "8/10/1977", 35.00, 30), // Part Time data			
									
							   	 new Faculty("Johnson", "Anne", "243", F, "4/27/1962", FU, Education("Ph.D", "Engineering", 3) ), // Faculty data
								 new Staff("Zapata", "Steven", "456", F, "7/12/1964", 35.00), // Staff data
							   	 new PartTime("Depirro", "Martin", "678", F, "9/15/1987", 30.00, 15), // Part Time data
									
							   	 new Staff("Rios", "Enrique", "789", M, "6/2/1970", 40.00), // /Staff data
							   	 new PartTime("Aldaco", "Marque", "945", M, "11/24/1988", 20.00, 35), // Part Time data		
								 new Faculty("Andrade", "Christopher", "623", F, "5/22/1980", AS, Education("MS", "Physical Education", 0) ) // Faculty data															 													   	 
							   };
	
	// Loop through the vector and print out the data to the user
	for (Employee* emp : vector) {
		
		// Call putData() on the current employee object and output the data to the user
		emp->putData();
		cout << endl;
		
	}
	
	// Return 0 to main
	return 0;
	
}




//Ashlyn Hanks
//Dr. Titus
#ifndef automobileType_H
#define automobileType_H
#include <iostream>

using namespace std;
//Set a class called automobileType
class automobileType
{
//Set public and private members
	public:
		// establishes values for odomenter, fuel, efficiency
		void setProperties(double, double, double);
		// puts private members into string 
		void getInfoString() const; 
		// decreases gas, adds miles, 
		void drive(double);
		// adds gass
		void addGass(double);
		automobileType();

	private:
		double odometer;
		double fuel;
		double mpg;
};

#endif

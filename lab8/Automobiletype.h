//Ashlyn Hanks
//Dr. Titus 
//Header file for automobiletype

#ifndef Automobiletype_H
#define Automobiletype_H
#include <string>

using namespace std;

class automobileType
{
	//creates private members for the odomter, gas, and mpg
	private:
	double odometer;
	double gas;
	double mpg;

	//creates public members for setProperties, getInfoString, drive, and constructors
	public:
	void setProperties(double, double, double);
	string getInfoString() const;
	void drive(double);
	automobileType(double, double, double);
	automobileType();
};
#endif
